
/** Author:Md.Mazharul Islam
CSE,SUST*/
#include <bits/stdc++.h>

#define endl  "\n"
using namespace std;




int main()
{   int t;
cin>>t;
  while(t--){
    vector<long long int >vec;
    long long int temp;
    for(int i=0;i<7;i++){
        long long int val;
        cin>>val;
        vec.push_back(val);
    }
    for(int i=2;i<7;i++){
        if(vec[0]+vec[1]+vec[i]==vec[6])
        {
            temp=vec[i];
            break;
        }
    }
    cout<<vec[0]<<" "<<vec[1]<<" "<<temp<<endl;
  }
    return 0;
}
