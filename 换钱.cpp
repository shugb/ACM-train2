#define LOCAL
#include<iostream>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
     int a,b,c,money,i=0;int32_t k;
     while(cin>>money)
      {
          i++;
          for(k=a=0;a<=money/5;a++)
              for(b=0;b<=(money-5*a)/2;b++)
                        k++;
        cout<<"Case "<<i<<":"<<money<<","<<k<<endl;
      }
 return 0;
}
