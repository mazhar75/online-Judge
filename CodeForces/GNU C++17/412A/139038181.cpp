/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<string>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int l=s.length();
 int j=k;
for(int i=0;i<l;i++)
{
    if(k<=l/2)
    {
        while(j>1){
            cout<<"LEFT"<<endl;
            --j;
        }
        cout<<"PRINT"<<" "<<s[i]<<endl;
        if(i<l-1)
        cout<<"RIGHT"<<endl;
    }
    else
    {
        while(j<=l-1){
            cout<<"RIGHT"<<endl;
            j++;
        }
        cout<<"PRINT"<<" "<<s[l-i-1]<<endl;
        if((l-i-1)>0)
        cout<<"LEFT"<<endl;

    }

}
return 0;
}
