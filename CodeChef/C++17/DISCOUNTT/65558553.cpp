#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<ll>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    ll cost=0;
    ll sum=0;
    for(int i=0;i<n;i++){
       if(a[i]<=y){
       cost+=0;
       }
       else{
       cost+=a[i]-y;

       }
       sum+=a[i];
    }
    cost+=x;
    if(cost<sum){
    cout<<"COUPON"<<endl;
    }
    else cout<<"NO COUPON"<<endl;









}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
