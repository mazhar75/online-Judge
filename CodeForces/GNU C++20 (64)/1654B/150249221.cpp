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


void cp::think(int x)
{
    string s;
    cin>>s;
    string r=s;
    sort(r.begin(),r.end());
    map<char,int>m;

    int l=s.length(),j=0;
    for(int i=0; i<l; i++)
    {
        m[s[i]]++;
    }
    for(int i=0; i<l; i++)
    {
        if(m[s[i]]>1)
        {
            m[s[i]]--;
        }
        else
        {
            j=i;
            break;
        }

    }
    for(int i=j; i<l; i++)
    {
        cout<<s[i];

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
