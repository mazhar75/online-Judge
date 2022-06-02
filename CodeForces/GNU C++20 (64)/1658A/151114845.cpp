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
    int cnt=0;
    int i=0;
    while(i<n)
    {
        if(i<n-1 and s[i]=='0' and s[i+1]=='0')
        {
            cnt+=2;
        }
        else if(i<n-2 and s[i]=='0' and s[i+1]=='1' and s[i+2]=='0')
        {
            cnt+=1;
        }
        i++;

    }
    cout<<cnt<<endl;



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
