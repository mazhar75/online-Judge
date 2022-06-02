/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){
    int n;
        cin >> n;
        vector<int> a(n);
        vector<pii> actions;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1; i++) {
            int min_pos = i;
            for (int j = i + 1; j < n; j++)
                if (a[j] < a[min_pos])
                    min_pos = j;

            if (min_pos > i) {
                actions.push_back({i, min_pos});
                int opt = a[min_pos];
                for (int j = min_pos; j > i; j--)
                    a[j] = a[j - 1];
                a[i] = opt;
            }
        }

        cout << actions.size() << '\n';
        for (auto &lr: actions) {
            cout << lr.first + 1 << ' ' << lr.second + 1 << ' ' << lr.second - lr.first << '\n';
        }



 }
int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
