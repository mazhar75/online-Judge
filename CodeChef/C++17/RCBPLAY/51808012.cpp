#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int t,x,y,z;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>x>>y>>z;
      if(x+2*z>=y)
      {
          cout<<"YES"<<endl;
      }
      else
        cout<<"NO"<<endl;
  }
  return 0;
}
