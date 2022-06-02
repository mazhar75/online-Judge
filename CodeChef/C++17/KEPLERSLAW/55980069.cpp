/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){
   int t1,t2,r1,r2;
   cin>>t1>>t2>>r1>>r2;
   float a,b;
   a=(t1*t1)*(r2*r2*r2)*1.0/(r1*r1*r1);
   b=t2*1.0;
   a=sqrt(a);
   //cout<<a<<" "<<b<<endl;
   if(a==b)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;

     }




int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
