//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
typedef unsigned long long ull;
using namespace std;
typedef long long LL;
const int N = 1000100;
int A[N];

int main(){
    int n;
    while(scanf("%d",&n)==1)
    {
    int ans = 0;
    for(int i=0;i<n;i++) scanf("%d",A+i);
    for(int i=n-1;i>=0;){
        int j=i-1;
        for(;j>=0;j--){
            if(A[j]<A[i]) ans+=A[i]-A[j];
            else break;
        }
        i = j;
    }
    printf("%d\n",ans);
    }
    return 0;
}

