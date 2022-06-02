/** Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
//#include<vector>
#define endl '\n'
using namespace std;
int main()
{

    long int t;
    cin>>t;
    while(t--){

        long long int a,b;
        cin>>a>>b;
        cout<<min((a+b)/4,min(a,b))<<endl;
    }
    return 0;
}
