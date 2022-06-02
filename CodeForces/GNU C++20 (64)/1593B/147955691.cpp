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
const int N =1e6+10;
const int MAXN = 100010;





//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
};

void cp::think(){
string s;
cin>>s;
string r=s;
reverse(r.begin(),r.end());
int cnt1=1000,cnt2=1000,l=s.length();
int d1=(int)r.find('0'),d2=(int)r.find('5');
if(r.find('0')!=string::npos){
cnt1=0;
for(int i=d1+1;i<l;i++){
  if(r[i]=='5' or r[i]=='0')
  break;
  cnt1++;
}
cnt1+=d1;
}
if(r.find('5')!=string::npos){
cnt2=0;
for(int i=d2+1;i<l;i++){
  if(r[i]=='2' or r[i]=='7')
  break;
  cnt2++;
}
cnt2+=d2;
}
cout<<min(cnt1,cnt2)<<endl;



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
