#include <set>
#include <map>
#include <list>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <math.h>
#define eps 1e-6
using namespace std;
int main()
{
    double s;
   double x;
    double i;
    while(cin>>x)
    {
        double k=1;
    s=x;
    for( i=1.0;pow(x,i*2+1)/(k*(i*2+1))>1e-6;i++)
    {
        s+=pow(x,i*2+1)/(k*(i*2+1))*pow(-1,i);
        k=k*(i+1);
       //  cout<<t<<endl;
    }
    cout<<s<<endl;
    }
    return 0;
}
