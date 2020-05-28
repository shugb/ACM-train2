//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#define MAXN 5001
#include<cstring>
#include<string>
#include<algorithm>
#include <iomanip>
#include<vector>
#define LL long long
using namespace std;
int add(int x[],int y[],int z[],int len)
{
    int i,j,r;
    for(j=0;j<len;++j)
    {
        z[j]+=x[j]+y[j];
        for(i=j;i<len;++i)
        {
            if(z[i]>=10)
            {
                z[i+1]+=z[i]/10;
                z[i]-=10;
                if(z[len]>0)
                    len++;
                if(z[i+1]<10)
                    break;
            }
        }
    }
    return len;
}
void init(int x[],string str, int len)
{
    for(int i=0;i<len;i++)
        x[len-i-1]=str[i]-'0';
}
void output(int a[],int b[],int z[],int la,int lb,int len)
{
    //for(int i=la-1;i>=0;i--)
   // {

      // cout<<a[i];
   // }
   // cout<<"+";
   // for(int i=lb-1;i>=0;i--)
   // {
       // cout<<b[i];
    //}
   // cout<<"=";
    for(int i=len-1;i>=0;i--)
        cout<<z[i];
    cout<<"\n";
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    string str1,str2;
    while(cin>>str1>>str2)
    {
        if(int(str1)!=0&&int(str2)!=0)
        {
    int a[MAXN]={0},b[MAXN]={0},z[MAXN]={0};
    int la,lb,len;
    la=str1.size();
    lb=str2.size();
    init(a,str1,la);
    init(b,str2,lb);
    if(la>=lb)
        len=add(a,b,z,la);
        else
        len=add(b,a,z,lb);
    output(a,b,z,la,lb,len);
        }
    }
    return 0;
}
