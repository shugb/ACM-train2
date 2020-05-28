#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include<algorithm>
#include <iomanip>
#include<string>
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
    while(cin>>n)
    {
        int x=0,y=0;
    for(int i=0;i<n;i++)
{
    int sum=0;
        char a[5],b[5];
            cin>>a>>b;
            sum=a[0]-b[0];
           switch(sum){
        case -3:
            x+=3;
            break;
        case -7:
            x+=3;
            break;
        case 1:
            x+=3;
            break;
        case 11:
            x+=3;
            break;
        case -2:
            x+=3;
            break;
        case 3:
            y+=3;
            break;
        case 7:
            y+=3;
            break;
        case -1:
            y+=3;
            break;
        case -11:
            y+=3;
            break;
        case 2:
            y+=3;
            break;
        default:
            x++;
            y++;
            break;
           }
}
        if(x>y)
        {
            cout<<"Alice";
        }
        if(x<y)
        {
            cout<<"Bob";
        }
        else if(x==y)
         {
            cout<<"Draw";
         }
    }
        return 0;
}
