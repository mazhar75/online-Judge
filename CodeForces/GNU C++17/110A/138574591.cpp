#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;
int main(){
long long int n,count1=0;
cin>>n;
while(n){
    if((n%10==4 )|| (n%10 == 7)){

        count1++;
    }
    n=n/10;

}
if((count1%10==4) || (count1%10==7))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
  return 0;
}
