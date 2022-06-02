#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
    int l;
    string s;
    cin>>l;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<l;i++){
        if(s[i]=='A')
        count1++;
        else
        count2++;

    }
    if(count1>count2){
        cout<<"Anton"<<endl;
    }
    else if(count2>count1)
    cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;

  return 0;
}
