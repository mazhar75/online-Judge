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


 int n,x;
cin>>n>>x;
vector<ll>a(n);
ll sum=0,ans=0,k;
for(int i=0;i<n;i++){
 cin>>a[i];
 sum+=a[i];
 k=a[i]/x;
 if(a[i]%x!=0 or k==0)k++;
 ans+=k;
 }
 if(sum%x==0)
 sum=sum/x;
 else
 sum=sum/x+1;
 cout<<min(sum,ans)<<" "<<max(sum,ans)<<endl;

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
