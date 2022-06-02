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
if(s[0]=='G' or s[0]=='R' or s[0]=='B'){
cout<<"NO"<<endl;
return;
}
int x,y,z;
for(int i=0;i<6;i++){
if(s[i]=='G')
 x=i;
 if(s[i]=='B')
 y=i;
 if(s[i]=='R')
 z=i;

}
int flag=0;
for(int i=0;i<x;i++){
  if(s[i]=='g')
  {
  flag=1;
  break;
  }
}
if(flag==0){
cout<<"NO"<<endl;
return;
}
flag=0;
for(int i=0;i<y;i++){
  if(s[i]=='b')
  {
  flag=1;
  break;
  }
}
if(flag==0){
cout<<"NO"<<endl;
return;
}
flag=0;
for(int i=0;i<z;i++){
  if(s[i]=='r')
  {
  flag=1;
  break;
  }
}
if(flag==0){
cout<<"NO"<<endl;
return;
}
cout<<"YES"<<endl;
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
