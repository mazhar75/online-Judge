/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
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

#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};

//public:
void cp::think(){
  ll a, b, c;
		cin>>a>>b>>c;
		// x, x+d, x+2d
		if (a <= b) {
			int d = b-a;
			if (!((b+d)%c)) {
				set<int> done;
				done.insert(a);
				done.insert(b);
				done.insert(b+d);
				if ((int)size(done) == 3 or (int)size(done) == 1) {
					cout<<"YES"<<endl;
					return;

				}

			}
		}
		if (b <= c) {
			int d = c-b;
			if (!((b-d)%a)) {
				set<int> done;
				done.insert(c);
				done.insert(b);
				if (b-d > 0) done.insert(b-d);
				if ((int)size(done) == 3 or (int)size(done) == 1) {
                   cout<<"YES"<<endl;
                   return;

				}
			}
		}
		if (a <= c) {
			int d = c-a;
			if (!(d&1)) {
				d /= 2;
				if (!((a+d)%b)) {
					set<int> done;
					done.insert(a);
					done.insert(c);
					done.insert(a+d);
					if ((int)size(done) == 3 or (int)size(done) == 1) {
						cout<<"YES"<<endl;
						return;
					}
				}
			}
		}
		// x, x-d, x-2d
		if (a >= b) {
			int d = a-b;
			if (!((b-d)%c)) {
				set<int> done;
				done.insert(a);
				done.insert(b);
				if (b-d > 0) done.insert(b-d);
				if ((int)size(done) == 3 or (int)size(done) == 1) {
				  cout<<"YES"<<endl;
				  return;
				}
			}
		}
		if (b >= c) {
			int d = b-c;
			if (!((b+d)%a)) {
				set<int> done;
				done.insert(c);
				done.insert(b);
				done.insert(b+d);
				if ((int)size(done) == 3 or (int)size(done) == 1) {
				  cout<<"YES"<<endl;
				  return;
				}
			}
		}
		if (a >= c) {
			int d = a-c;
			if (!(d&1)) {
				d /= 2;
				if (!((a-d)%b)) {
					set<int> done;
					done.insert(a);
					done.insert(c);
					if (a-d > 0) done.insert(a-d);
					if ((int)size(done) == 3 or (int)size(done) == 1) {
						cout<<"YES"<<endl;
						return;
					}
				}
			}
		}
		cout<<"NO"<<endl;


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
