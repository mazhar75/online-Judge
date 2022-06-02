#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    vector<pair<int,int>>s;
    int h,w;
    cin>>h>>w;
    for(int i=0; i<h; i++)
    {
        string q;
        cin>>q;
        for(int j=0; j<w; j++)
        {
            if(q[j]=='o')
            {
                s.push_back({i,j});
            }
        }
    }
    int a,b,x,y;
    a=s[0].first;
    b=s[0].second;
    x=s[1].first;
    y=s[1].second;
    if(a==x)
    {
        cout<<(max(b,y)-min(b,y))<<endl;
    }
    else if(b==y)
    {
        cout<<(max(a,x)-min(a,x))<<endl;

    }
    else
    {
        int ans= (max(a,x)-min(x,a))+max(y,b)-min(y,b);
        cout<<ans<<endl;

    }
}
int main()
{
   //freopen("00_input.txt","r+",stdin);
    int test=1;
    ///cin>>test;
    while(test--)solve();
    return 0;
}
