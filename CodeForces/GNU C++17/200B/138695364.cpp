#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#define endl "\n"
 //#define s 1000
using namespace std;



int main(){
   int n,sum=0;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sum+=x;
    }
    float m=n+0.0;
    float y=sum+0.0;
    float percentage=y*100/(m*100);
  printf("%.12f",percentage);





  return 0;
}