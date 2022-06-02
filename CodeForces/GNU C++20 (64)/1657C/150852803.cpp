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
        string s;
        cin >> n >> s;
        int l = 0;
        int cnt = 0;
        while (l + 1 < n) {
            if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')')) {
                l += 2;
            } else {
                int r = l + 1;
                while (r < n && s[r] != ')') {
                    ++r;
                }
                if (r == n) {
                    break;
                }
                l = r + 1;
            }
            ++cnt;
        }
        cout << cnt << ' ' << n - l << '\n';



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
