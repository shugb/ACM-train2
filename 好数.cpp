#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include<algorithm>
#include <iomanip>
#include<string>
#define offset 10000
#define eps 1e-5
#define LL long long
using namespace std;
char a[100001];
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
     int i=0,flag=0;
    while((a[i]=getchar())!='\n')
      {
         i++;
      }
     char t=a[0];
     for(int j=1;j<i;j++)
    {
         if(t!=a[j])
           {
              cout<<"NO"<<endl;
              flag=1;
              break;
           }
    }
    if(flag==0)
     {
   cout<<"YES"<<endl;
     }
    return 0;
}
