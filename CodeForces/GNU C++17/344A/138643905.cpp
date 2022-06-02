#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;

int main(){
    long int n,sum=0;
    cin>>n;
      string s;
      char c;
     cin>>s;
     c=s[0];
     //temp.insert(0, s);


    for(long int i=2;i<=n;i++){

    cin>>s;
    if(s[0]!=c)
     sum++;
     c=s[0];




    }
    cout<<sum+1<<endl;

  return 0;
}
