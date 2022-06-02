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
int n,a,b;
cin>>n>>a>>b;
vector<int>small;
vector<int>big;
if((a<=n/2 && b<=n/2) or (a>n/2 && b>n/2) or (a==b) or(a>n/2+1) or (b<n/2)){
cout<<-1<<endl;
return;
}
if(b>a){
small.push_back(a);
for(int i=b+1;i<=n;i++){
small.push_back(i);

}
big.push_back(b);
for(int i=1;i<a;i++){
big.push_back(i);

}
for(int i=a+1;i<b;i++){
 if(n+1-b<n/2)
 small.push_back(i);
 else
 big.push_back(i);

}
for(int i=0;i<small.size();i++){
cout<<small[i]<<" ";
}
for(int i=0;i<big.size();i++){
cout<<big[i]<<" ";
}
cout<<endl;
return;}
else if(a>b){
for(int i=a;i<=n;i++)
cout<<i<<" ";
for(int i=1;i<=b;i++)
cout<<i<<" ";
cout<<endl;
return;

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
