// BISMILLAH

//Never give up.Slow and steady wins the race
// Author:Md.Mazharul Islam

#include <bits/stdc++.h>



#define endl "\n"
#define rr(i, a, b) for(long long int i=a; i<b; i++)
#define vin(n, a) vector <long long int> a(n); rr(i, 0, n) cin >> a[i]
//#define yes cout<<"YES"<<"\n"
//#define no cout<<"NO"<<"\n"
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
ll PowerOfTwo(ll n)
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
    ll n;
    cin>>n;
    ll ans,ans1,ans2;
    if(n%2!=0 or n<4)
    {
        cout<<-1<<endl;
        return;
    }
    if(n%4==0 and n%6==0)
    {
        cout<<(n/6)<<" "<<(n/4)<<endl;
        return;
    }
    if(n%4==0)
    {
        if((n-4)%6==0)
        {
            ans=(n-4)/6+1;
        }
        else ans=(n-8)/6+2;
        cout<<ans<<" "<<(n/4)<<endl;
        return;
    }
    else if(n%6==0)
    {
        if((n-6)%4==0)
        {
            ans=(n-6)/4;
        }
        cout<<(n/6)<<" "<<(ans+1)<<endl;
        return;

    }
    else
    {
        if((n-4)%6==0)
        {
            ans1=(n-4)/6+1;

        }
        else ans1=(n-8)/6+2;

        ans2=(n-6)/4+1;
        cout<<ans1<<" "<<ans2<<endl;


    }




}






int main()
{

    //freopen("00_input.txt","r+",stdin);
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
