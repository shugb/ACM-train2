#include<bits/stdc++.h>
using namespace std;
#define maxn 7010
#define maxm 100010
int p[105], h[105], c[105], qw[maxm], qn[maxm], f[2][maxm],wu[11][11],M,N,sum;
void dp(int *f, int *g, int prize, int height, int c)
{
    int l=1, r=1, d=0, k, a, b, mini;
    for(b=0;b<prize;b++)
    {
        l=1,r=1,qw[r]=g[b],qn[r++]=b;
        for(a=0,d=0;a+b<=M;a+=prize,d+=height)
        {
            while(qw[r-1]+d<=g[a+b] and l<r)r--;
            qw[r]=g[a+b]-d,qn[r++]=a+b;
            mini=max(0,a+b-prize*c);
            while(qn[l]<mini)l++;
            f[a+b]=qw[l]+d;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int w=0,v=0,i,j;
    sum=1;
    cin>>N>>M;
    memset(wu,0,sizeof(wu));
        for( i=1;i<=N;i++)
        {
            cin>>w>>v;
            wu[w][v]++;
        }
        for( i=1;i<11;i++)
    {
        for( j=1;j<11;j++)
        {
            if(wu[i][j]!=0)
            {
                c[sum]=wu[i][j];
                h[sum]=j;
                p[sum]=i;
                sum++;
            }
        }
    }
    sum--;
       for(i=1;i<=sum;i++)dp(f[i&1],f[~i&1],p[i],h[i],c[i]);
    cout<<f[sum&1][M]<<endl;
    return 0;
}
