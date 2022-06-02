
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
/**typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;
int cnt;
*/

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
    ll n,r;
    cin>>n>>r;
    vector<pair<ll,ll>>a;
    vector<ll>p(n);
    vector<ll>q(n);
    for(ll i=0;i<n;i++)cin>>p[i];
    for(ll j=0;j<n;j++)cin>>q[j];

    for(ll i=0; i<n; i++)
    {

        a.push_back(make_pair(p[i]-q[i],p[i]));

    }
    sort(a.begin(),a.end());
    ll cnt=0;
    //for(int i=0;i<n;i++){
      //cout<<a[i].first<<" "<<a[i].second<<endl;
    //}
    for(ll i=0; i<n; i++)
    {
        ll y=a[i].second-a[i].first;

        ll k=a[i].second-y;
        if(r>=a[i].second)
        {
            ll d=r-a[i].second;
            //cout<<"d="<<d<<" ";
            ll m=d/k+1;
            //cout<<m<<" ";
            cnt+=m;
            r=r-m*k;
            //cout<<"r="<<r<<" ";


        }

    }
    cout<<cnt<<endl;





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
