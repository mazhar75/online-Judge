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
    set<char>s1;
    string s;
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++){
            if(s[i]<=122 && s[i]>=97)
                s1.insert(s[i]);

    }
    cout<<s1.size()<<endl;


  return 0;
}
