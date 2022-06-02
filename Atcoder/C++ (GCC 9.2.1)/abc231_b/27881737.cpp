#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<set>
#include<algorithm>
#include<map>
#include<iterator>
#define endl "\n"

 //#define s 1000
using namespace std;
//vector<int>vec;
//vector<int>::iterator it1,it2;



int main(){

   int n;
   cin>>n;
   map<string ,int>m;
   map<string ,int>::iterator it;
   string s;
   cin>>s;
   int j=1;
   m.insert(pair<string , int>(s, j));
   for(int i=1;i<n;i++){
         //string s;
         cin>>s;

         it = m.find(s);

    if(it == m.end())
        m.insert(pair<string,int>(s,j));
        else
            m[s]++;

    }
     int r=m.begin()->second;
     for (it = m.begin(); it!= m.end(); ++it) {
            r=max(r,it->second);
     }
     //cout<<r<<endl;
     for (it = m.begin(); it!= m.end(); ++it) {
            //cout<<it->second<<" ";
            if(it->second==r){
                cout<<it->first<<endl;
                //out<<it->second<<endl;
                //break;
            }
     }


  return 0;
}
