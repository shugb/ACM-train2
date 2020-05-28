#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define Maxn 2000
double a[Maxn];
double b[Maxn];
bool myfunction2 (double i,double j) { return (i>j); }
int main()
{
    char c;
    int n=0;
    int flag;
    while(1)
    {
    int i=0;
        flag=0;
    while((c=getchar())!='\n')
    {
        if(c!=' ')
        {
            ungetc(c,stdin);
            cin>>a[i];
            b[i]=a[i];
            i++;
            flag++;
        }
    }
    sort(a,a+flag,myfunction2);
    cout<<"Case "<<++n<<":"<<endl;
    for(int i=0;i<flag-1;i++)
     {
         for(int j=0;j<flag;j++)
         {
              if(b[i]==a[j])
              {
                  cout<<j+1<<", ";
                  break;
              }
         }
     }
     for(int j=0;j<flag;j++)
        if(b[flag-1]==a[j])
     {
         cout<<j+1<<endl;
         break;
     }
    }
    return 0;
}
