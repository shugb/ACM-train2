#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n)
    {
      if(n%2!=0)
      {
          cout<<-1<<endl;
      }
      else
      {
          while(n%2==0)
          {
              n/=2;
          }
          cout<<n<<endl;
      }
    }
    return  0;
}
