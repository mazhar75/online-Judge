
/** Author:Md.Mazharul Islam
CSE,SUST*/
#include <bits/stdc++.h>

#define endl  "\n"
using namespace std;




int main()
{   int t;
cin>>t;
  while(t--){
      long int n,k;
      cin>>n>>k;
      vector<long int>vec;
      for(long int i=0;i<n;i++){
        long int val;
        cin>>val;
        vec.push_back(val);
      }
      //sort(vec.begin(),vec.end());
      long long int sum=0;
      for(long int i=0;i<n;i++){
          if(vec[i]>k){
            ++sum;
          }
      }
      cout<<sum<<endl;
  }

    return 0;
}
