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
vector<int>a(n);
vector<int>odd;
vector<int>even;
for(int i=0;i<n;i++) cin>>a[i];
int flag=0;
for(int i=0;i<n-1;i++){
  if(a[i]<=a[i+1]){
  flag=1;
  continue;

  }
  else{
  flag=0;
  break;}

}
if(flag==1){
cout<<"YES"<<endl;
return;
}
for(int i=0;i<n;i++){
 if(a[i]%2==0)
 even.push_back(a[i]);
 else
 odd.push_back(a[i]);
}
int m=0;
for(int i=0;i<even.size();i++){
    if(m>even[i]){
    cout<<"NO"<<endl;
    return;
    }
    else{
    m=max(m,even[i]);

    }
}
m=0;
for(int i=0;i<odd.size();i++){
  if(m>odd[i]){
  cout<<"NO"<<endl;
  return;
  }
  else{
  m=max(m,odd[i]);
  }
}
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
