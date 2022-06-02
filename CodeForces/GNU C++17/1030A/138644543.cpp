#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
     int n,flag=0;
    cin>>n;
    for (int i=0;i<n;i++){
        bool val;
        cin>>val;
        if(val==1)
        {
            cout<<"HARD"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"EASY"<<endl;


  return 0;
}
