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
int n,k;
cin>>n>>k;
int d;
if((n*k)%2==0)
d=(n*k)/2;
else
d=(n*k)/2+1;
if(d%k!=0){
cout<<"NO"<<endl;
return;
}
cout<<"YES"<<endl;
vector<int>v;
for(int i=1;i<=n*k;i++){
if(i%2!=0)
v.push_back(i);
}
for(int i=2;i<=n*k;i++){
if(i%2==0)
v.push_back(i);
}
for(int i=0;i<n*k;i++){
   if(i==k-1 or (i+1)%k==0)
   cout<<v[i]<<endl;
   else
   cout<<v[i]<<" ";
}

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
