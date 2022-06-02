#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x,k,maximum=0;
vector<int>a;
vector<int>b;
cin>>n>>x>>k;
for(int i=0;i<n;i++){

    int val1;
    cin>>val1;
    a.push_back(val1);
}
for(int i=0;i<n;i++){

    int val2;
    cin>>val2;
    b.push_back(val2);
}
for(int j=0;j<n;j++){
    if(abs(a[j]-b[j])<=k)
        ++maximum;
}
if(maximum>=x)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


}

return 0;
}
