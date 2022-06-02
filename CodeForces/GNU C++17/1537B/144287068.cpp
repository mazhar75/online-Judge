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

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};



void cp::think(){
ll n,m,i,j;
cin>>n>>m>>i>>j;
ll x1,y1,x2,y2,x3,y3,x4,y4;
x1=1;y1=1;x2=1;y2=m;x3=n;y3=1;x4=n;y4=m;
ll d1,d2;
d1=abs(x1-i)+abs(y1-j)+abs(x4-i)+abs(y4-j);
d2=abs(x2-i)+abs(y2-j)+abs(x3-i)+abs(y3-j);
if(d1>d2)
cout<<x1<<" "<<y1<<" "<<x4<<" "<<y4<<endl;
else
cout<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;
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
