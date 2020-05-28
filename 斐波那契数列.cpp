//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
using namespace std;
typedef long long LL;
const int MOD=1000000007;
const int N=6;
struct Matrix
{
    LL v[N][N];
};
Matrix A=
{
    1,1,1,1,1,1,
    1,0,0,0,0,0,
    0,0,1,3,3,1,
    0,0,0,1,2,1,
    0,0,0,0,1,1,
    0,0,0,0,0,1
};

Matrix I=
{
    1,0,0,0,0,0,
    0,0,0,0,0,0,
    8,0,0,0,0,0,
    4,0,0,0,0,0,
    2,0,0,0,0,0,
    1,0,0,0,0,0
};

Matrix matrix_mul(Matrix A, Matrix B, long long m)
{
    Matrix ans;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ans.v[i][j] = 0;
            for (int k = 0; k < N; k ++)
            {
                ans.v[i][j] += (A.v[i][k] * B.v[k][j]) % m;
            }
            ans.v[i][j] %= m;
        }
    }
    return ans;
}
Matrix matrix_pow(Matrix C, long long n, long long m)
{
    Matrix ans = {1, 0, 0, 0,0,0,
                  0, 1, 0, 0,0,0,
                  0, 0, 1, 0,0,0,
                  0, 0, 0, 1,0,0,
                  0,0,0,0,1,0,
                  0,0,0,0,0,1
                  };
    while (n)
    {
        if (n & 1)
            ans = matrix_mul(ans, C, m);
        C = matrix_mul(C, C, m);
        n >>= 1;
    }
    return ans;
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    LL n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if(n==0)
         {
        cout<<0<<endl;
         }
        else{
         Matrix res = matrix_pow(A, n - 1, MOD);
        res = matrix_mul(res, I, MOD);
        cout << res.v[0][0] << endl;
        }
    }
    return 0;
}
