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
ll n,x;
cin>>n>>x;
vector<ll>a;
for(int i=1;i<=n;i++){
  if(x%i==0)
  a.push_back(i);
}
for(int i=0;i<a.size();i++){
  if(x/a[i]<=(n-a[i]+1) or x/a[i]==1){
  cout<<"YES"<<endl;
  return;
  }
}
cout<<"NO"<<endl;

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
