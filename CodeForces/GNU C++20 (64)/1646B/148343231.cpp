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
vector<ll>a(n);
for(int i=0;i<n;i++)cin>>a[i];

sort(a.begin(),a.end());
int r=1,b=2;
ll red=0,blue=0;
 red=a[n-1];blue=a[1]+a[0];
if(red>blue){
cout<<"YES"<<endl;
return;
}
if(red<=blue and (n==3 or n==4)){
cout<<"NO"<<endl;
return;
}

int i=2,j=n-2;
while(i<j){
    red+=a[j];
    blue+=a[i];
    j--;i++;
    if(red>blue){
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
