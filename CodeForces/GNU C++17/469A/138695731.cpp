#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<set>
#define endl "\n"
 //#define s 1000
using namespace std;



int main(){
 set<int>s;
 int n;
 cin>>n;
 int x,y;
 cin>>x;
 for(int i=0;i<x;i++){
    int val;
    cin>>val;
    s.insert(val);
 }
 cin>>y;
 for(int i=0;i<y;i++){
    int val;
    cin>>val;
    s.insert(val);
 }
 if(s.size()==n)
    cout<<"I become the guy."<<endl;
 else
    cout<<"Oh, my keyboard!"<<endl;





  return 0;
}
