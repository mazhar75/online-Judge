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
int n;
cin>>n;
vector<int>a(n);
ll sum=0,x=0;
for(int i=0;i<n;i++) {
cin>>a[i];
sum+=a[i];}
ll diff=sum,y=sum,z=x;
for(int i=0;i<n;i++){
   x+=a[i];
   sum-=a[i];
  if((abs(sum-x))<diff)
  {
    y=sum;
    z=x;

  }
  diff=sum-x;


}
cout<<max(y,z)<<endl;




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
