/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;

class cp
{
public:
    void think(int);
};

bool isPowerOfTwo(ll n)
{
    return ((n)&(n-1)); // if 0 than yes else false
}
ll PowerOfTwo(int n)
{
    return 1<<n;

}


void cp::think(int o)
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    if(n==1)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    if(n==2)
    {
        cout<<1<<" "<<2<<endl;
        return;
    }
    int x,y;
    x=*max_element(a.begin(),a.end());
    y=*min_element(a.begin(),a.end());
    int d1=0,d2=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            d1=i+1;
        }
        if(a[i]==y)
        {
            d2=i+1;
        }

    }
    cout<<d2<<" "<<d1<<endl;

}






int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t,i=1;
    cin>>t;
    while(t--)
    {

        me.think(i);
        i++;

    }
    return 0;
}
