#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int ans;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=i)
        {
            ans=a[i];
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=i)
        {
            ans = (ans & a[i]);
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
