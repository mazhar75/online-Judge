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
{   int n,a;
    cin >> n >> a;
    vector<int> v(n);
    for(int& x : v) cin >> x;
    bool ans = false;
    if(n == 1) ans = (v[0] == a);
    else
    {
        sort(v.begin(), v.end());
        int i = 0;
        int j = 1;
        while(j < n and i < n)
        {
            if(v[i] + abs(a) == v[j])
            {
                ans = true;
                break;
            }
            else if(v[i] + abs(a) < v[j]) ++i;
            else ++j;
        }
    }
    cout << (ans? "YES" : "NO") << '\n';


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
