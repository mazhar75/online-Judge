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

void cp::think(){
 int n;
    scanf("%d", &n);
    vector<int> a(n);
    map<int, int> cnt;
    for (auto &x : a) {
      scanf("%d", &x);
      cnt[x] += 1;
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if ((2 * sum) % n != 0) {
      puts("0");
      return;
    }
    long long need = (2 * sum) / n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      int a1 = a[i];
      int a2 = need - a1;
      if (cnt.count(a2)) ans += cnt[a2];
      if (a1 == a2) ans -= 1;
    }
    printf("%lld\n", ans / 2);



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
