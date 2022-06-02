/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int>vec;
for(int i=0;i<n;i++){
    int val;
    cin>>val;
    vec.push_back(val);
}
sort(vec.begin(),vec.end());
cout<<vec[n-k]<<endl;
return 0;
}
