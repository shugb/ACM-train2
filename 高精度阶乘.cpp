#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#define MAXN 40000
#define BASE 10000
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<vector>
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
    cout<<n<<"!"<<endl;
    vector<int> vec;
    int i,j,k=0;
    vec.push_back(1);
    if(n == 0)
        cout<<1<<endl;
    else if(n == 1)
        cout<<1<<endl;
    else  //n����1�����
    {
        for(i=1;i<=n;i++)
        {
            for(j=vec.size()-1;j>=0;j--)//ÿ����Ԫ��Ԫ�ض�����
            {
                vec[j] *= i;
            }
            k = 0;//�Ƿ��н�λ����ʼΪ0
            for(j=vec.size()-1;j>=0;j--)
            {
                vec[j] += k;//���Ͻ�λ����
                k = vec[j]/10;
                vec[j] = vec[j]%10;
            }
            while(k)//���ܽ�kֱ�Ӳ��뵽ǰ�棬��Ϊk�п��ܴ���10
            {
                vec.insert(vec.begin(),k%10);//ֱ�ӷ�������ǰ�漴��
                k = k/10;
            }
        }
    }
    for(i=0;i<vec.size();)
    {
        if(n!=0&&n!=1)
        {

        cout<<vec[i];
        }
         i++;
        if(i==80)
         cout<<endl;
         if(i!=80&&i%80==0&&i!=0&&i!=1)      //���ÿλ���������ڶ�λΪʮλ
         {

           cout<<endl;}
    }
    if(n!=0&&n!=1)
     cout<<endl;
    }
    return 0;
}
