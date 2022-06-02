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
   int x,y;
   cin>>x>>y;
   if(y>=x){
   cout<<(x)<<endl;
   return;
   }
   int k=x-y;
   x=x+k;
   cout<<x<<endl;


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
