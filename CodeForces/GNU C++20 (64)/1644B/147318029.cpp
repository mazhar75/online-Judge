/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
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
const int N =1e6+10;
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
vector<int>a(n);
int temp;
for(int i=0;i<n;i++) a[i]=n-i;
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
   cout<<a[j]<<" ";
   if(n-j-1==i and j!=0){
   temp=a[j];
   a[j]=a[j-1];
   a[j-1]=temp;


   }

   }

  cout<<endl;
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
