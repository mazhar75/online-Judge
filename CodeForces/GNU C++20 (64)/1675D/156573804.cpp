// BISMILLAH

//Never give up.Slow and steady wins the race
// Author:Md.Mazharul Islam

#include <bits/stdc++.h>



#define endl "\n"
#define rr(i, a, b) for(long long int i=a; i<b; i++)
#define vin(n, a) vector <long long int> a(n); rr(i, 0, n) cin >> a[i]
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define rn return
#define pi 3.14159265



using namespace std;
typedef long long int ll;
const int mxN=100;


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




int func(int x)
{
    int ans=1e9;
    for(int i=0; i<=16; i++)
    {
        ans=min(ans, 15+i-(__builtin_ctz(x+i)));
        //cout<<(__builtin_ctz(x+i))<<" ";
    }
    return ans;

}
bool isPalindrome(string s)
{
    string r=s;
    reverse(s.begin(),s.end());
    int l=s.length();
    bool flag=true;
    for(int i=0; i<l; i++)
    {
        if(s[i]!=r[i])
        {
            flag=false;
            break;
        }
    }
    return flag;

}
//Main Code


void cp::think(int o)
{

    int n;
    cin>>n;
    vector<int>a(n+1);
    a[0]=-1;
    int root;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=0; i<=n; i++)
    {
        if(a[i]==i)
        {
            root=i;
            break;
        }
    }
    vector<int>outdegree(n+1);
    for(int i=0; i<=n; i++)
    {
        outdegree[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        outdegree[a[i]]++;
    }
    outdegree[root]--;
    vector<int>leaf;
    for(int i=1; i<=n; i++)
    {
        if(outdegree[i]==0)leaf.push_back(i);
    }
    bool vis[n+1];
    for(int i=0; i<=n; i++)vis[i]=true;

    int k=leaf.size();
    vector<vector<int>>ans(k);
    for(int i=0; i<leaf.size(); i++)
    {
        ans[i].push_back(leaf[i]);
        int node=leaf[i];
        vis[node]=false;
        node=a[node];

        while(vis[node])
        {


            if(node==root)
            {
                ans[i].push_back(root);
                vis[root]=false;
                break;

            }
            else if(vis[node])
            {
                ans[i].push_back(node);
                vis[node]=false;
                node=a[node];


            }
            else break;

        }
    }
    cout<<k<<endl;
    for(int i=0; i<k; i++)
    {
        reverse(ans[i].begin(),ans[i].end());
        cout<<ans[i].size()<<endl;
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;





}






int main()
{

    //freopen("input.txt","r+",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t,i=1;
    cin>>t;
    while(i<=t)
    {

        me.think(i);
        i++;

    }
    return 0;
}
