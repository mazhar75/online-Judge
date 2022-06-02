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

void cp::think(){

ll a,b,c,x,y,z;
cin>>a>>x>>b>>y>>c>>z;
ll m=max(a+x,max(b+y,c+z));
cout<<m<<endl;
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
