#include <iomanip>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const double eps = 1e-10;
double a1,b1,a2,b2,c1,c2,l,r;
double f(double x)
{
    return (a1-a2)*x*x+(b1-b2)*x+c1-c2;
}
double simpson(double l,double r)
{
    return (f(l)+4*f((l+r)/2.0)+f(r))/6.0*(r-l);
}
double integral(double l,double r)
{
    double mid = (l+r)/2.0;
    double res = simpson(l,r);
    if (fabs(res-simpson(l,mid)-simpson(mid,r)) < eps)
        return res;
    else
        return integral(l,mid) + integral(mid,r);
}
double delta(double a1,double a2,double b1,double b2,double c1,double c2)
{
    return (b1-b2)*(b1-b2)-4*(a1-a2)*(c1-c2);
}
int main()
{
    int t,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1>>c1;
        cin>>a2>>b2>>c2;
        if(delta(a1,a2,b1,b2,c1,c2)>0&&(a1-a2!=0))
        {
        r=((b2-b1)+pow(delta(a1,a2,b1,b2,c1,c2),0.5))/(2.0*(a1-a2));
        l=((b2-b1)-pow(delta(a1,a2,b1,b2,c1,c2),0.5))/(2.0*(a1-a2));
        cout<<"Case "<<++flag<<":"<<endl;
        cout<<fixed << setprecision(2)<<fabs(integral(l,r))<<endl;
        }
        else
      {
          cout<<"Case "<<++flag<<":"<<endl<<fixed << setprecision(2)<<0.00<<endl;
      }
    }
    return 0;
}
