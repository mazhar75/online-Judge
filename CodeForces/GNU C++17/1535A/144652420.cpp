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
int s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
int m1,m2,m3,m4;
m1=max(s1,s2);
m2=min(s1,s2);
m3=max(s3,s4);
m4=min(s3,s4);
if(m1<m4 or m2>m3)
cout<<"NO"<<endl;
else
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
