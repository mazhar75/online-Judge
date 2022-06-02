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
/*int a,b,c;
if(n%2==0)
{
a=(n | n+1);
b=(n | n+2);
c=(n+1 | n+2);
}
else if(n==1){
a=(0 | 1);
b=(1 | 3);
c=(3 | 0);

}
else{
a=(n | n-1);
b=(n-2 | n);
c=(n-2 | n-1);

}
cout<<(a & b & c)<<endl;*/
if(n%2==0){
cout<<n<<" "<<n+1<<" "<<n+2<<endl;
return;
}
if(n==1)
cout<<0<<" "<<1<<" "<<3<<endl;
else
cout<<n-2<<" "<<n-1<<" "<<n<<endl;
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
