/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){
 int n,k;
 cin>>n>>k;
  int l=k;
  if((n%2==0)&&(k<=n/2))
         {
             for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++)
                    {if((i%2!=0)&&(j%2!=0)&&(i==j)&&(l>0))
                     {cout<<"R";
                     --l;}
                    else
                        cout<<".";}
                        cout<<endl;
             }
         }
else if((n%2!=0)&&(k<=(n/2)+1))
{
     for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++)
                    {if((i%2!=0)&&(j%2!=0)&&(i==j)&&(l>0))
                        {cout<<"R";
                           --l;}
                    else
                        cout<<".";}
                        cout<<endl;}
}
else
    cout<<-1<<endl;
 }
int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
