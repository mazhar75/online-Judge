/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"
#define m 998244353
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
ll fact(ll n)
{
    if (n >= m)
        return 0;

    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % m;

    return result;
}

void cp::think(int o)
{
   int n,x,y;
   cin>>n>>x>>y;
   string s;
   cin>>s;
   int p=0,q=0;
   for(int i=0;i<n;i++){
     if(s[i]=='1')
     q++;
     else if(s[i]=='0')
     p++;
   }
   if(p==0 or q==0)
   cout<<0<<endl;
   else
   cout<<min(x,y)<<endl;


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
