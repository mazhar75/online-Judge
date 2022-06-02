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
ll n,x,y;
cin>>n;
int nihad=0;
for(ll i=n;;i++){
   x=i;
   y=i;
 while(x!=0){
   int d=x%10;
   x=x/10;
   if(d!=0 and y%d==0){
   nihad=1;
   continue;
   }
   if(d==0){
   nihad=1;
   continue;
   }
   if(y%d!=0){
   nihad=0;
   break;
   }


 }
 if(nihad==1)
 {cout<<i<<endl;
 return;}

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
