#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include<algorithm>
#include <iomanip>
#define offset 10000
#define eps 1e-5
#define LL long long
using namespace std;
int n,tree[100000];
void add(int k,int num)
{
    while(k<=n)
    {
        tree[k]+=num;
        k+=k&-k;
    }
}
int read(int k)
{
    int sum=0;
    while(k)
    {
        sum+=tree[k];
        k-=k&-k;
    }
    return sum;
}
struct node
{
    int val,pos;
}a[100000];
bool cmp(node a,node b)
{
    return a.val < b.val;
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int i,j,flag=0,b[100000];
    while(cin>>n)
    {
        memset(tree,0,sizeof(tree));
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i].val);
            a[i].pos = i;
        }
         sort(a+1,a+1+n,cmp);
         int cnt = 1;
        for(i=1;i<=n;i++)
            b[a[i].pos] = cnt++;
        int sum = 0;
        for(i=1;i<=n;i++)
        {
            add(b[i],1);
            sum += (i - read(b[i]));
        }
    cout<<"Case "<<++flag<<":"<<endl<<sum<<endl;
    }
    return 0;
}
