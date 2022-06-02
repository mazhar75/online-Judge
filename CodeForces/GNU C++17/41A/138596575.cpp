#include<iostream>
#include<vector>
#define endl "\n"
 //#define s 1000
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main(){
    string s,r;
    cin>>s>>r;
    reverseStr(s);
    int l=s.length(),flag=0;
    for(int i=0;i<l;i++){
        if(s[i]!=r[i]){
            flag=1;
            break;
        }


    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;



  return 0;
}
