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
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long int>a;
    for(int i=1;i<=n;i++){
        if(n==1)
            cout<<n<<endl;
            else
                cout<<i+1<<" ";

    }
    cout<<endl;
}



  return 0;
}
