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
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
int tar[4];
    int n,i,tmp,pig_count;
    while(scanf("%d", &n)&&n)
    {
        pig_count =0;
        memset(tar,0,sizeof(tar));
        tar[3]=1;
    while(n>0){
        tmp = tar[3];
        tar[3] +=tar[2];
        for(i = 2; i>0; i--){
            tar[i] = tar[i-1];
        }
        tar[0] = tmp;
        n--;
    }
    for(i = 0; i<4; i++)
        pig_count+=tar[i];
    printf("%d\n", pig_count-1);
    }
return 0;
}
