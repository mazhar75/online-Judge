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
long int n,a=0,b=0,c=0;
cin>>n;
vector<int>vec;
for(long int i=0;i<n;i++){
    int val;
    cin>>val;
    vec.push_back(val);
}
for(long int i=0;i<n;i++){
    if(vec[i]==1)
        a++;
    else if(vec[i]==2)
        b++;
    else
        c++;
}
long int m=max(a,max(b,c));
cout<<n-m<<endl;


return 0;
}
