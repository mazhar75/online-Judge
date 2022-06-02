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
 int n;
 cin>>n;
 if(n%2020==0 or n%2021==0){
 cout<<"YES"<<endl;
 return;
 }
 int x=n/2020,y=0,number;
 int flag=1;
 while(flag!=0){
 number=x*2020+y*2021;
 if(n==number){
 cout<<"YES"<<endl;
 return;
 }
 if(x==0){
 flag=0;
 break;
 }
 x--;
 y++;
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
