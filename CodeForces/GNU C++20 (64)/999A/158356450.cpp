#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int ans=0;
    int i=0,j=n-1;
    while(i<=j)
    {
        if(a[i]<=k)
        {
            ans++;
            i++;

        }
        else if(a[j]<=k)
        {
            ans++;
            j--;
        }
        else break;

    }
    cout<<ans<<endl;



}
int main()
{
    //freopen("cp.txt","r+",stdin);
    int test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
