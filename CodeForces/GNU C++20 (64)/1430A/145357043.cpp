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
int n;
cin>>n;
if(n%3==0){
cout<<n/3<<" "<<0<<" "<<0<<endl;
return;
}
if(n%5==0){
cout<<0<<" "<<n/5<<" "<<0<<endl;
return;
}
if(n%7==0){
cout<<0<<" "<<0<<" "<<n/7<<endl;
return;
}
int k=0;
for(int i=n;i>0;i-=5){
 if(i%7==0){
 cout<<0<<" "<<k<<" "<<i/7<<endl;
 return;
 }
 else if(i%3==0){
 cout<<i/3<<" "<<k<<" "<<0<<endl;
 return;
 }
 k++;
}
cout<<-1<<endl;




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
