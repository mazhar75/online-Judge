#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<set>
#include<algorithm>
#define endl "\n"

 //#define s 1000
using namespace std;
vector<int>vec;



int main(){
 int k,l,m,n;
 long int d,r=0,s=0,p=0,q=0;
 cin>>k>>l>>m>>n>>d;
 for(int i=1;i<=d;i++){

    if(i%k==0 && binary_search(vec.begin(), vec.end(), i)!=1 )
    {  vec.push_back(i);
        p++;
    }

    if((i%l==0)&&(binary_search(vec.begin(), vec.end(), i)!=1)){
        vec.push_back(i);
        q++;
    }

    if((i%m==0 )&& (binary_search(vec.begin(), vec.end(), i)!=1)){
             vec.push_back(i);
              r++;
    }

    if((i%n==0) && (binary_search(vec.begin(), vec.end(), i)!=1) ){
                     vec.push_back(i);
              s++;
    }
 }
 cout<<p+q+r+s<<endl;




  return 0;
}
