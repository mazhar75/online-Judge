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
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}



void cp::think(){
int n,l,r,k,sum=0;
cin>>n>>l>>r>>k;
vector<int>vec(n);
for(int i=0;i<n;i++) cin>>vec[i];
int num=0;
sort(vec.begin(),vec.end());
for(int i=0;i<n;i++){
  if(vec[i]>=l && vec[i]<=r && (sum+vec[i])<=k)
  {
    sum+=vec[i];
    num++;
  }

}
cout<<num<<endl;
}






int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
