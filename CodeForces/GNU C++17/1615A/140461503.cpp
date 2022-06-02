/** Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<utility>
#include<set>
#include<vector>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long int>vec;
    for(int i=0;i<n;i++){
        long long int val;
        cin>>val;
        vec.push_back(val);
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=vec[i];
    }
    if(sum%n==0){
        cout<<0<<endl;
    }
    else
        cout<<1<<endl;
}
return 0;
}
