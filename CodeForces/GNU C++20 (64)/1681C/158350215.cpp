#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void solve()
{

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    vector<pair<int,int>>x;
    for(int i=0; i<n; i++)
    {
        x.push_back({a[i],b[i]});
    }
    vector<pair<int,int>>ans;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(x[j].first>x[j+1].first)
            {
                if(x[j].second<x[j+1].second)
                {
                    cout<<-1<<endl;
                    return;
                }
                swap(x[j],x[j+1]);
                ans.push_back({j+1,j+2});
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(x[j].second>x[j+1].second)
            {
                if(x[j].first<x[j+1].first)
                {
                    cout<<-1<<endl;
                    return;
                }
                swap(x[j],x[j+1]);
                ans.push_back({j+1,j+2});
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }





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
