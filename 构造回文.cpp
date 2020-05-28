#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include <iomanip>
#define offset 1110
#define eps 1e-5
#define LL long long
using namespace std;
void inverse(char * s)
{
    int n=strlen(s)-1;
    int i=0;
    while(i<=n/2)
    {
         char temp;
         temp=s[i];
         s[i]=s[strlen(s)-1-i];
         s[strlen(s)-1-i]=temp;
              i++;
     }
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int t,k=0;
    cin>>t;
    getchar();
    for(int i=0;i<t;i++)
    {
        int flag=0;
        char s[65537],b[65537];
       cin.getline(s,65537);
       for(int i=0;i<strlen(s);i++)
       {
           b[i]=s[i];
       }
       b[strlen(s)]='\0';
        inverse(s);
        if(strlen(s)%2==0)
        cout<<"Case "<<++k<<": "<<"\""<<b<<s<<"\""<<endl;
        else if(strlen(s)%2==1)
           {
               b[strlen(s)-1]='\0';
           cout<<"Case "<<++k<<": "<<"\""<<b<<s<<"\""<<endl;
           }
    }
    return 0;
}
