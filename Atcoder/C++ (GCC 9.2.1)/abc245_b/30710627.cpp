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
    int n,x;
    cin>>n;
    set<int>s;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(auto  it=s.begin(); it!=s.end(); it++)
    {
        vc.push_back(*it);
    }
    for(int i=0; i<s.size(); i++)
    {
        if(vc[i]!=i)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<s.size()<<endl;
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
