#include<bits/stdc++.h>
#define long long int ll
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    bool vis[n];
    for(int i=0; i<n; i++)vis[i]=false;
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if(!vis[i])
        {
            if(a[i]>a[i+1])
            {
                cnt++;
                vis[i]=true;
                vis[i+1]=true;
            }
            else
            {
                vis[i]=true;
            }
        }
    }
    cout<<cnt<<endl;


}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
