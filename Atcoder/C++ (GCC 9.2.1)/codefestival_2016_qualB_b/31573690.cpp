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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int y=0;
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='c')
        {
            cout<<"No"<<endl;
            continue;
        }
        if(s[i]=='b' and y<b and (x+y)<(a+b))
        {
            cout<<"Yes"<<endl;
            y++;
            continue;
        }
        else if(s[i]=='a' and x<(a+b-y))
        {
            cout<<"Yes"<<endl;
            x++;
            continue;

        }
        else cout<<"No"<<endl;
    }









}






int main()
{

    //freopen("input.txt","r+",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t=1,i=1;
    //cin>>t;
    while(i<=t)
    {

        me.think(i);
        i++;

    }
    return 0;
}
