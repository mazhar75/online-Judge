/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e6+10;
const int MAXN = 100010;







//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
};

ll mod(string num, int n,ll a)
{

    ll res = 0;


    for (int i = 0; i < n; i++)
        res = (res * 10 + (int)num[i] - '0') % a;

    return res;
}



void cp::think(){
int n;
        int64_t x;
        cin >> n >> x;
        vector<int64_t> ar(n);
        for (auto& it : ar)
            cin >> it;
        sort(ar.begin(), ar.end());
        vector<bool> vis(n);
        int j = 0, q = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (vis[i])
                continue;
            if (ar[i] * x > ar[j]) {
                while (ar[i] * x >= ar[j] && j < n)
                    q = ++j;
                q = --j;
            }
            if (i < q && ar[i] * x == ar[q])
                vis[q--] = 1;
            else
                ans++;
        }
        cout << ans << "\n";

}

int main() {
    //RUN_FAST;
    cp me;
  int t;
  cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
