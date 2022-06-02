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

int myfun(vector<pair<int,int>>& y){
  int sum=0,a,b,c,d;
  for(int i=0;i<y.size();i++){
    for(int j=i+1;j<y.size();j++){
      a=y[i].first;
      b=y[i].second;
      c=y[j].first;
      d=y[j].second;
      sum+=abs(a-c)+abs(b-d);
    }
  }


return sum;

}



void cp::think(){
 int n;
        cin >> n;
        map <int, int> d;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            d[x]++;
        }
        int cnt = 0;
        for (auto i : d) {
            ++cnt;
        }
        int cur_cnt = cnt;
        for (int k = 1; k <= n; ++k) {
            cout << max(k, cnt) << "\n";
        }



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
