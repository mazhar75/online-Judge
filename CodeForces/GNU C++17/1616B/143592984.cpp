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
int n;
cin>>n;
string s;
cin>>s;
int k=1;
for(int i=0;i<n-1;i++){
if(s[0]>s[i+1] && s[i]>=s[i+1])
{
 k++;
 continue;

}
else
break;

}
string s1,s2,s3;
s1=s.substr(0,k);
s2=s1;
reverse(s2.begin(),s2.end());
s3=s1+s2;
cout<<s3<<endl;





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
