/**Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<vector>
 
 

using namespace std;

 
 
 
int main(){
 
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   vector<int>vec;
   for(int i=0;i<n;i++){
    int b;
    cin>>b;
    vec.push_back(b);
   }
   int sum=1,flag=1;
   for(int i=0;i<n;i++){
    if(vec[i]==1){
        ++sum;
    if((i>=1) && (vec[i]==1) && (vec[i-1]==1)){
        --sum;
        sum=sum+5;}}
    else if((i<=n-2) && (vec[i]==0) && (vec[i+1]==0))
    {
       sum=-1;
        break;
 
    }
 
   }
   
   cout<<sum<<endl;
 
  
   }
 
 
 
  return 0;
}