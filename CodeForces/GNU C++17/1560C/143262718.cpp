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
int i=1;
while(i*i<k){
i++;
}
if(i*i==k)
cout<<k/i<<" "<<1<<endl;
else{
int start,finish;
start=(i-1)*(i-1)+1;
finish=i*i;
int mid=(start+finish)/2;
if(k==mid)
{cout<<i<<" "<<i<<endl;
return;}
else if(k<mid){
for(int j=start,row=1;j<mid;j++){
 if(j==k)
 {cout<<row<<" "<<i<<endl;
  break;}
  row++;

}

}
else {

for(int j=mid,col=1;j<i*i;j++)
{
  if(j==k){

  cout<<i<<" "<<i-col+1<<endl;
  break;
  }
  col++;

}

}

}

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
