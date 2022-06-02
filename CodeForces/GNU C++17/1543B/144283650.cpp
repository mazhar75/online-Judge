/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<cmath>
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

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};



void cp::think(){
ll n,sum=0;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++){
int x;
cin>>x;
sum+=x;
}
if(sum%n==0){
cout<<0<<endl;
return;
}
ll i=n,j=0;
ll t=sum/n;
ll l=t+1;
while(i*l+j*t!=sum){
i--;
j++;
}
cout<<i*j<<endl;

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
