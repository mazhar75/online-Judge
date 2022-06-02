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
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int m=a[n-1];
    if(n==1)
    {
        if(a[0]<=1)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;

    }
    int k=m-1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==k or a[i]==m)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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
