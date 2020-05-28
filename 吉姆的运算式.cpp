#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int k=0,m=0;
    while(cin>>a)
    {
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==',')
        {
          string  s=a.substr(i+1,a.length()-i-1);
          a=s;
          i=-1;
        }
    }
        for(int i=0;i<a.length();i++)
    {
        if(a[i]!=')'&&a[i]!='(')
            cout<<a[i];
       if(a[i]==')')
       {
           break;
       }
    }
    }
    return 0;
}
