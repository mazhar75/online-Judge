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


void cp::think(int w)
{

    ll ans=1;
    int n;
    cin>>n;
    string s;
    cin>>s;
    //int l=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u')
        {

            continue;

        }
        else
        {
            int a,e,k,o,u;
            a=s[i]-'a';
            if(s[i]>'e')e=s[i]-'e';
            else e='e'-s[i];
            if(s[i]>'i')k=s[i]-'i';
            else k='i'-s[i];
            if(s[i]>'o')o=s[i]-'o';
            else o='o'-s[i];
            if(s[i]>'u')u=s[i]-'u';
            else u='u'-s[i];
            int d[5]= {a,e,k,o,u};
            sort(d,d+5);
            int m=d[0];
            int cnt=1;
            for(int j=1; j<5; j++)
            {
                if(m==d[j])cnt++;
            }
            ans=ans*cnt;
            ans=ans%(1000000007);


        }
    }

    cout<<ans<<endl;










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
