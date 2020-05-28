#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
    a=a*1000000000;
    b=b*1000000000;
    a=a%b/1000000000.0;
    printf("%.9lld",a);
    }
    return 0;
}
