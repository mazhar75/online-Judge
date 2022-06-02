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
    ll k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=n-1; i>=0; i--)
    {
        if(k>0 and a[i]/x>=1)
        {
            ll d=a[i]/x;
            if((k-d)>=0)
            {
                a[i]=a[i]-d*x;
                k=k-d;
            }
            else
            {
                a[i]=a[i]-k*x;
                k=0;

            }
        }
        else
        {
            break;
        }

    }
    sort(a.begin(),a.end());
    
    if(k>0)
    {

        for(int i=n-1; i>=0; i--)
        {
            if(k>0)
            {
                a[i]=0;
                k--;
            }
            else
                break;

        }

    }
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;



}






int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t=1,i=1;
    //cin>>t;
    while(t--)
    {

        me.think(i);
        i++;

    }
    return 0;
}
