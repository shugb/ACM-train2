#include<bits/stdc++.h>
using namespace std;
#define maxn 5000001
#define MAXN 2000001
#define N 1000009
#define ll  long long
#define pi 0.57721566490153286060651209
bool isprime[N];
int prime[N],countp=0;
void dop()
{
    memset(isprime, 1, sizeof(isprime));
	isprime [1] = isprime [0] = 0;
	for (int i=2;i<N;i++)
	{
		if (isprime[i]) prime[++countp] = i;
	for (int j=1;j<=countp&&i*prime[j]<N;j++)
		{
			isprime[i*prime[j]] = 0;
			if (!(i%prime[j])) break;
		}
	}

}
void solve(int n)
{
    for(int i=1;prime[i]<=n;i++)
    {
        if(isprime[n-prime[i]])
        {
            cout<<n<<" = "<<prime[i]<<" + "<<n-prime[i]<<endl;
            break;
        }
    }
}
int main()
{
    dop();
    int n;
    while(cin>>n&&n)
    {
        solve(n);
    }
    return 0;
}
