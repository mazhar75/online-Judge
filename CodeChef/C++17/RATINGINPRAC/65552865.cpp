#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    bool flag=true;
    for(int i=0;i<n-1;i++){
      if(a[i]>a[i+1]){
       flag=false;
       break;
      }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;








}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
