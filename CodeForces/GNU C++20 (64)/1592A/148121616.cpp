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
int n,h;
cin>>n>>h;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
sort(a.begin(),a.end());
int m=a[n-1],k=a[n-2];

ll sum=0,cnt=0,ans;
ans=h/(m+k);
sum=ans*(m+k);cnt=ans*2;
while(sum<h){
  if(sum<h){
  sum+=m;
  cnt++;
  }
  if(sum<h){
  sum+=k;
  cnt++;
  }

}
cout<<cnt<<endl;




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
