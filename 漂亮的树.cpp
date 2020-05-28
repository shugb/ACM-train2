#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],c[100001];
int main()
{
    int n,m,v;
    while(cin>>n)
    {
        m=0;v=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(a));
        memset(c,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
            c[i]=a[i];
        }
        if(n%2!=0)
        {
        for(int i=0;i<n/2;i++)
        {
            if(a[i+1]!=a[i]+1)
            {
                a[i+1]=a[i]+1;
                m++;
            }
        }
        for(int i=n/2;i<n-1;i++)
        {
            if(a[i+1]!=a[i]-1)
            {
                a[i+1]=a[i]-1;
                m++;
            }
        }
        for(int i=n-1;i>n/2;i--)
        {
            if(b[i-1]!=b[i]+1)
            {
                b[i-1]=b[i]+1;
                v++;
            }
        }
        for(int i=n/2;i>0;i--)
        {
            if(b[i-1]!=b[i]-1)
            {
                b[i-1]=b[i]-1;
                v++;
            }
        }
        cout<<min(m,v)<<endl;
        }
        else
        {
            for(int i=0;i<n/2-1;i++)
        {
            if(a[i+1]!=a[i]+1)
            {
                a[i+1]=a[i]+1;
                m++;
            }
        }
        if(a[n/2-1]!=a[n/2])
        {
            a[n/2]=a[n/2-1];
            m++;
        }
        for(int i=n/2;i<n-1;i++)
        {
            if(a[i+1]!=a[i]-1)
            {
                a[i+1]=a[i]-1;
                m++;
            }
        }
        for(int i=n-1;i>n/2;i--)
        {
            if(b[i-1]!=b[i]+1)
            {
                b[i-1]=b[i]+1;
                v++;
            }
        }
         if(b[n/2-1]!=b[n/2])
        {
            b[n/2-1]=b[n/2];
            v++;
        }
        for(int i=n/2-1;i>0;i--)
        {
            if(b[i-1]!=b[i]-1)
            {
                b[i-1]=b[i]-1;
                v++;
            }
        }
        cout<<min(m,v)<<endl;
        }
    }
    return 0;
}
