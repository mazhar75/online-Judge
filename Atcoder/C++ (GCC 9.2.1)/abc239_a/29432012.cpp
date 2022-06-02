/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#include<map>
#include<sstream>
#include<string>
#include<utility>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e2+10;
const int MAXN = 100010;



//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();


};
void cp::think(){
ll x,y;
scanf("%lld",&x);
double h;
y=x*(12800000+x);
h=y*1.0;
h=sqrt(h);
printf("%.10f\n",h);


}






int main() {
    //RUN_FAST;
    cp me;
  int t=1;
  //cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
