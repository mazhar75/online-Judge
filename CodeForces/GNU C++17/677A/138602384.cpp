#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
    int n,h,sum=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val<=h)
            sum+=1;
        else
            sum+=2;
    }
    cout<<sum<<endl;

  return 0;
}
