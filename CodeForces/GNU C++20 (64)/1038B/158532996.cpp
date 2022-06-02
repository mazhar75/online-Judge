#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n==1 or n==2)
    {
        cout<<"No"<<endl;
        return;
    }
    int k;
    ll sum=n*(n+1)/2;
    for(ll i=2; i<=n; i++)
    {
        if(sum%i==0)
        {
            k=i;
            break;
        }
    }
    cout<<"Yes"<<endl;
    cout<<1<<" "<<k<<endl;
    cout<<(n-1)<<" ";
    for(ll i=1; i<=n; i++)
    {
        if(i!=k)cout<<i<<" ";

    }
    cout<<endl;









}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test=1;
    //cin>>test;
    while(test--)solve();
    return 0;
}
