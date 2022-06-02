#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<set>
#include<algorithm>
#define endl "\n"

 //#define s 1000
using namespace std;
//vector<int>vec;
//vector<int>::iterator it1,it2;



int main(){

   int d;
   cin>>d;
   float m;
   if(d%100==0)
    cout<<d/100<<endl;
   else{
    m=d+0.0;
    printf("%.2f",m/100);
   }


  return 0;
}
