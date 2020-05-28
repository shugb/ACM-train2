//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define offset 10000
#define eps 1e-5
#define LL long long
using namespace std;
typedef long long ll;
const int maxn = 200000000;

int A[maxn], k;

int pow_mod (int a, int n, int M)
{
    int ans = 1;
    while (n) {
        if (n&1)
            ans = ans * a % M;
        a = a * a % M;
        n /= 2;
    }
    return ans;
}

int euler_phi(int n) {
    int m = (int)sqrt(n+0.5);
    int ans = n;
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            ans = ans / i * (i-1);
            while (n%i==0)
                n /= i;
        }
    }

    if (n > 1)
        ans = ans / n * (n - 1);
    return ans;
}

int solve (int d, int M) {
    if (d == k - 1)
        return A[d]%M;

    int phi = euler_phi(M);
        int c = solve (d+1, phi) + phi;
    return pow_mod(A[d], c, M);
}

int main () {
    int cas = 1;
 int M;
    while (scanf("%d%d", &k,&M)==2)
    {
        for (int i = 0,t=k; i < k; i++,t--)
            A[i]=t;
        printf("%d\n",solve(0, M));
    }
    return 0;
}
