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
//#define RUN_FAST ios::sync_with_stdio(false);
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
int k;
cin>>k;
int j=1;
for(int i=1;i<=k-1;i++){
 if((j+1)%3==0 && (j+2)%10!=3)
 {
    j=j+2;
 }
 else if((j+2)%3!=0 && (j+1)%10==3){
 j=j+2;
 }
 else if((j+1)%3==0 && (j+1)%10==3){
 j=j+2;
 }
 else if((j+1)%3==0 && (j+2)%10==3)
 j=j+3;
 else if((j+2)%3==0 && (j+1)%10==3)
 j=j+3;
 else
 j++;


}
cout<<j<<endl;

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
