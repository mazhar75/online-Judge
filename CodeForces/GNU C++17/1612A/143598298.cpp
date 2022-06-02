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

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}



void cp::think(){
int x,y;
cin>>x>>y;
if((x+y)%2!=0){
cout<<-1<<" "<<-1<<endl;
return;
}
if(x>y)
cout<<(x+y)/2<<" "<<0<<endl;
else
cout<<0<<" "<<(x+y)/2<<endl;




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
