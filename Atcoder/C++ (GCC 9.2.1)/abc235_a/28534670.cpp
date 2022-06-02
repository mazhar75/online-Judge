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

string s;
cin>>s;
int a,b,c;
a=s[0]-'0';
b=s[1]-'0';
c=s[2]-'0';
long int m=(a*100+b*10+c*1)+(b*100+c*10+a)+(c*100+a*10+b);
cout<<m<<endl;


  }







int main() {
    RUN_FAST;
    cp me;
  int t=1;
 //cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
