#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<set>
#define endl "\n"
 //#define s 1000
using namespace std;



int main(){
   set<long long int>s;
  for (int i=0;i<4;i++){
    long long int x;
    cin>>x;
    s.insert(x);}
    cout<<4-s.size()<<endl;




  return 0;
}
