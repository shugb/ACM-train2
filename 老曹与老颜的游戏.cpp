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
   int a,b,c;
   while(cin>>a>>b>>c)
   {
       int Count=0;
       if(c<min(a,b))
       {
           cout<<"No"<<endl;
       }
       else
     {
       int maxa = c / a;
       int maxb = c / b;
       for(int i=0; i<=maxa; i++)
       {
          for(int j=0; j<=maxb; j++)
           {
              if(a * i + b * j == c)
               {
                  Count++;
                }
           }
       }
       if(Count==0)
       {
           cout<<"No"<<endl;
       }
       else
        cout<<"Yes"<<endl;
      }
    }
    return 0;
}
