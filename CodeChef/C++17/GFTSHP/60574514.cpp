
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
    void think();
};

bool isPowerOfTwo(ll n)
{
    return ((n)&(n-1)); // if 0 than yes else false
}
ll PowerOfTwo(int n)
{
    return 1<<n;

}


void cp::think()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll sum=0,j=0;
    for(ll i=0; i<n; i++)
    {
        sum+=a[i];
        if(sum>=k)
        {
            j=i;
            break;
        }
    }
    if(sum<k or(sum==k and j==n-1))
    {
        cout<<n<<endl;
        return;
    }
    if(sum==k)
    {
        cout<<(j+1)<<endl;
        return;

    }
    if(sum>k)
    {
        ll r;
        if(a[j]%2==0) r=a[j]/2;
        else r=a[j]/2+1;
        sum=sum-a[j]+r;
        if(sum<=k)
        {
            cout<<(j+1)<<endl;
        }
        else
            cout<<j<<endl;
    }


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

        me.think();

    }
    return 0;
}
