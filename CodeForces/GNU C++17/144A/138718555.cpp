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

    int n,m1,m2,m=0,p=0,q=0;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        vec.push_back(val);
    }
    m1=m2=vec[0];
    for(int i=1;i<n;i++){
        m1=max(vec[i],m1);
        m2=min(vec[i],m2);
    }
    for(int i=0;i<n;i++){
        if(m1==vec[i])
        {
            p=i;
            break;
        }
    }
    m=n;
    while(--m>=0){
        if(vec[m]==m2){
            q=m;
            break;
        }
    }
    if(q>p){
        cout<<vec.size()-q-1+p<<endl;
    }
    else
        cout<< vec.size()-q-2+p<<endl;


  return 0;
}
