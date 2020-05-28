#define LOCAL
#include<iostream>
#include<cstdio>
#include <cstdlib>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define LL long long
using namespace std;
#define MAXN 50
typedef struct Matrix
{
long long s[MAXN][MAXN];
}M;

M Multiply(M a, M b, int size)
{
int i,j,id;
M c;
memset(c.s,0,sizeof(c.s));
for(i=0; i<size; ++i)
for(j=0; j<size; ++j)
for(id=0; id<size; ++id)
c.s[i][j] += a.s[i][id] * b.s[id][j];
return c;
}

M Pow(M src, int size, int t)
{
M d;
int i;
if(t==0)
{
memset(d.s, 0, sizeof(d.s));
for(i=0; i<size; ++i)
d.s[i][i]=1;
return d;
}
else
{
M des=Pow(src,size,t/2);
if(t&1)
return Multiply(Multiply(des,des,size),src,size);
else
return Multiply(des,des,size);
}
}
int main()
{
     #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
int n,k,i,j;
while(std::cin>>n>>k)
{
M a;
for(i=0; i<n; ++i)
for(j=0; j<n; ++j)
//scanf("%d",&a.s[i][j]);
std::cin>>a.s[i][j];
M matpow = Pow(a, n, k);
for(i=0; i<n; ++i)
{
for(j=0; j<n; ++j)
{
if ( j == n-1)
std::cout<<matpow.s[i][j]<<std::endl;
else
std::cout<<matpow.s[i][j]<<" ";
}
}
printf("\n");
}
return 0;
}
