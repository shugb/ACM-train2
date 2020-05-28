#define LOCAL
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
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n;
    cin>>n;
    while(n--)
    {
        LL p;
        cin>>p;
        LL s=0;
        LL c=1;
        for(int i=1;;i++){
            c *= 2;
            LL  temp = p/c;
            if(!temp) break;
            else s+=temp;
        }
        cout << s << endl;
    }
    return 0;
}
