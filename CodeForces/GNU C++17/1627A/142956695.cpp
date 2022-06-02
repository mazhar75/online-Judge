/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};



void cp::think(){

	int n, m, r, c;
		scanf("%d %d %d %d", &n, &m, &r, &c);
		int ok = 0;
		for (int i = 1; i <= n; i++) {
			string s;
			cin >> s;
			for (int j = 1; j <= m; j++) {
				char nw = s[j-1];
				if (nw == 'B') {
					if (!ok) ok = 1;
					if ((i == r || j == c) && ok < 2) ok = 2;
					if (r == i && j == c) {
						ok = 3;
					}
				}
			}
		} if (!ok) {
			printf("-1\n");
			return;
		} if (ok == 3) {
			puts("0");
			return;
		} printf("%d\n", ok == 1 ? 2 : 1);




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
