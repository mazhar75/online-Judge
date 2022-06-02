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
int n;
cin>>n;
vector<int>a(n);
vector<int>b;
int m1=0,m2=51;
for(int i=0;i<n;i++){
 int x;
 cin>>x;
 m1=max(m1,x);
 m2=min(m2,x);
 a[i]=x;
 b.push_back(x);
}
sort(b.begin(),b.end());
int flag=1;
for(int i=0;i<n;i++){
  if(a[i]==b[i])
  continue;
  else{
  flag=0;
  break;
  }
}
if(flag==1){
cout<<0<<endl;
return;
}
if(a[0]==m2 or a[n-1]==m1){
cout<<1<<endl;
return;
}
if(a[0]==m1 and a[n-1]==m2){
cout<<3<<endl;
return;
}
cout<<2<<endl;
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
