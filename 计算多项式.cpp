#define LOCAL
#include<iostream>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
double calculator(double a,int t,double *c,int i);
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
     int n;double a,s=0;
     while(cin>>n)
      {
        int t;
        cin>>a;
        double c[n+1];
        for(int i=0;i<n+1;i++){cin>>c[i];}
        for(int i=0,t=n;i<n+1;i++,t--)
        {
            c[i]=calculator(a,t,&c[0],i);
        }
        for(int i=0;i<n+1;i++)
        {
          s=s+c[i];
        }
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
        s=0;
      }
 return 0;
}
double calculator(double a,int t,double *c,int i)
{
    double s=1;
    for(;t>0;t--)
    {
       s=s*a ;
    }
    s=c[i]*s;
    return s;
}
