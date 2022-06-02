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
int sum=0,k;
for(int i=1;i<=n;i++){
int x;
cin>>x;
sum+=x;
if(x%2!=0){
k=i;
}
}
for(int j=2;j<=sqrt(sum)+1;j++){
  if(sum%j==0){
  cout<<n<<endl;
  for(int i=1;i<=n;i++){
  cout<<i<<" ";

  }
  cout<<endl;
  return;
  }
}
cout<<n-1<<endl;
for(int j=1;j<=n;j++){
  if(j!=k)
  cout<<j<<" ";
}
cout<<endl;
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
