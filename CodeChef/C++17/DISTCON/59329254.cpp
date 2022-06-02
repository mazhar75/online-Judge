/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
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
int d;
cin>>d;
if(d%2!=0){
cout<<-1<<endl;
return;
}
int a1,b1,a2,b2,a3,b3,a4,b4;
a1=d;b1=0;a2=d;b2=d;a3=d/2;b3=d/2;a4=d/2*3;b4=d/2;
cout<<a1<<" "<<b1<<endl;
cout<<a2<<" "<<b2<<endl;
cout<<a3<<" "<<b3<<endl;
cout<<a4<<" "<<b4<<endl;


   }








int main() {
    //RUN_FAST;
    cp me;
  int t=1;
  //cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
