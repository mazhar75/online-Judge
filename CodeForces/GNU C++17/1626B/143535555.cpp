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
string s;
cin>>s;
int l=s.length();
int a,b,sum=0,p=0,q=1,m=s[0]-'0'+s[1]-'0';
for(int i=0;i<l-1;i++){
a=s[i]-'0';
b=s[i+1]-'0';
sum=a+b;
if(sum>9){
m=sum;
p=i;
q=i+1;

}}

	string s1,s2,s3,k;
	s1=s.substr(0,p);
	s2=to_string(m);
	s3=s.substr(q+1,l-q-1);
	k=s1+s2+s3;
	cout<<k<<endl;




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
