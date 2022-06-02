#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if((y-x)>=2)
                sum+=1;

    }
    cout<<sum<<endl;

  return 0;
}
