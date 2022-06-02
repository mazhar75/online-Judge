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
    string s;
    cin>>s;
    map<char,int>mp;
    int l=s.length();

    char c=s[0];
    for(int i=0; i<l; i++)
    {
        mp[s[i]]++;
    }
    int k=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]==c)
        {
            k=i;
            break;
        }

    }
    if(mp[s[0]]==l)
    {
        cout<<"YES"<<endl;
        return;
    }
    int m=1,cnt=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>1)
        {
            m=max(it->second,m);
            if(it->second==2)
                cnt++;
        }
    }
    if(m<2 or (cnt==1 and m==2 and s[0]==s[l-1]))
    {
        cout<<"YES"<<endl;
        return;
    }
    string r=s.substr(0,k);
    map<char,int>v;
    for(int i=0; i<k; i++)
    {
        v[r[i]]++;
    }
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(it->second>1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    int j=0;
    bool flag=true;
    for(int i=0; i<l; i++)
    {


        if(s[i]!=r[j])
        {
            flag=false;
            break;
        }
        if(j+1==k)
        {
            j=0;
        }
        else j++;

    }

    if(flag)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;





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