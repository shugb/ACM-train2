#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define LL long long
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int m;
    while(cin>>m)
    {
      if(m%4==0&&m%100!=0)
        cout<<"The year "<<m<<" is a leap year."<<endl;
      else if(m%100==0&&m%400==0)
        cout<<"The year "<<m<<" is a leap year."<<endl;
      else
        cout<<"The year "<<m<<" is not a leap year."<<endl;
    }
    return 0;
}
