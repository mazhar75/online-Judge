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
    int k;
    if(n==2)
    {
        cout<<0<<" "<<1<<endl;
        return;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(!isPowerOfTwo(i))
        {
            k=i;
            break;
        }

    }
    for(int i=1; i<k; i++)
    {
        cout<<i<<" ";
    }
    cout<<0<<" ";
    for(int i=k; i<n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;


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
