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

for(int i=0;i<n;i++)cin>>a[i];
int cnt1=0,cnt2=0;
cnt1=count(a.begin(), a.end(), 0);
for(int i=0;i<n;i++){
  if(a[i]!=0)
  cnt2++;
}
int ans=max(cnt1,cnt2);
cout<<ans<<endl;

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
