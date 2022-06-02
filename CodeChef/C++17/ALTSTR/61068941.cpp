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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            one++;
        else
            zero++;
    }
    if(one==0 or zero==0)
    {
        cout<<1<<endl;
        return;
    }
    if(one==zero)
    {
        cout<<(2*zero)<<endl;
        return;
    }
    int m=min(one,zero);
    cout<<(2*m+1)<<endl;


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
