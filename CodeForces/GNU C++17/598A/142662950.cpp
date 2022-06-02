/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;

#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
long long  power(int x, unsigned int y)
{
    int res = 1;

    while (y > 0) {

        if (y & 1)
            res = res * x;


        y = y >> 1;
        x = x * x;
    }
    return res;
}


void cp::think(){
ll n;
cin>>n;
ll ans=n*(n+1)/2;
ll a=power(2,0),sum=0;
int i=1;
while(a<=n){

sum+=a;
a=power(2,i);
i++;

}
cout<<ans-2*sum<<endl;


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
