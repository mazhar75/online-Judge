#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
    int y,q,temp[10],flag=1;
    cin>>y;
    while(flag){
    q=y+1;
    for(int i=0;i<4;i++){
            temp[i]=q%10;
           q=q/10;

    }
    if((temp[0]!=temp[1])&&(temp[0]!=temp[2])&&(temp[0]!=temp[3])&&(temp[1]!=temp[2])&&(temp[1]!=temp[3])&&(temp[2]!=temp[3]))
        flag=0;

        y=y+1;}
        cout<<y<<endl;


  return 0;
}
