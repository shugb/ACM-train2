#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> p={998244353, 1000000007, 19260817, 100000037, 100000007};
ll a[5][100007];
char s[100007];
int main()
{
    for(int i=0;i<5;++i)
    {
        a[i][0]=a[i][1]=1;
        for(int j=2;j<=100000;++j)
            a[i][j]=(a[i][j-1]+a[i][j-2])%p[i];
    }
    while(cin>>s)
    {
        ll k[5];
        memset(k,0,sizeof(k));
        int n=strlen(s);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<5;++j)
                k[j]=(k[j]*10+s[i]-'0')%p[j];
        }
        for(int i=1;i<=100000;++i)
        {
            bool ok=true;
            for(int j=0;j<5;++j)
                if(k[j]!=a[j][i]) {ok=false; break;}
            if(ok)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
