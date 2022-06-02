#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
     long long int n,sum=0;
     cin>>n;
     if(n%2==0){
           sum=n/2;

     }
     else{
        sum=-(n+1)/2;
     }
     cout<<sum<<endl;


  return 0;
}
