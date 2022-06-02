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
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 and s[0]=='1'){
    cout<<1<<endl;
    return;}
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='1')
            flag=1;
        if(s[i]=='1' and s[i+1]=='1')
        {
            cout<<2<<endl;
            return;
        }
    }
    if(flag==0 and s[n-1]!='1')
        cout<<0<<endl;
    else
        cout<<1<<endl;

}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t,i=1;
    cin>>t;
    while(t--)
    {

        me.think(i);
        i++;

    }
    return 0;
}
