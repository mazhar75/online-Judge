#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
using namespace std;
vector<long long int>vec;
int main(){
    map<char,int>m;
    map<char,int>::iterator it1,it2;
    m.insert({'R',3});
    m.insert({'B',2});
    m.insert({'G',1});
    char c1,c2;
    cin>>c1>>c2;
    it1=m.find(c1);
    it2=m.find(c2);
    if(it1->second>it2->second)
        cout<<it1->first<<endl;
    else
        cout<<it2->first<<endl;
    return 0;



}
