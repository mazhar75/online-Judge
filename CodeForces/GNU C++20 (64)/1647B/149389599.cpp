/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;

class cp{
public:
void think();
};

 void cp::think(){
int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
            if (sum == 3) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";

 }







int main() {

  cp me;
  int t,i=1;
  cin>>t;
  while(t--){

    me.think();

  }
  return 0;
}
