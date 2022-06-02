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
int countOdd(int L, int R){

    int N = (R - L) / 2;


    if (R % 2 != 0 || L % 2 != 0)
        N += 1;

    return N;
}



void cp::think(){
int n;
cin>>n;
vector<int>a(n);
vector<int>b;
for(int i=0;i<n;i++) cin>>a[i];
int l=0,r=n-1;
while(l<=r){
if(l!=r){
b.push_back(a[l]);
b.push_back(a[r]);}
else
b.push_back(a[l]);
l++;r--;

}
for(auto it=b.begin();it!=b.end();it++)
cout<<*it<<" ";
cout<<endl;



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
