/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<cmath>
#include<algorithm>

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
int n,m;
cin>>n>>m;
vector<int>negetive;
vector<int>positive;
int m1=1000;
for(int i=1;i<=m*n;i++){
int x;
cin>>x;
if(x<0)
negetive.push_back(x);
else
positive.push_back(x);
m1=min(m1,abs(x));

}
int sum=0;

for(auto it=negetive.begin();it!=negetive.end();it++){
sum+=abs(*it);
}
for(auto it=positive.begin();it!=positive.end();it++){
sum+=*it;

}
if(negetive.size()%2!=0)
cout<<sum-2*m1<<endl;
else
cout<<sum<<endl;



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
