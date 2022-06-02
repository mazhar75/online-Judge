
#include<iostream>
#include<string>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
    int n1,n2;
    char a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    char s[5]={a,b,c};

    for(int i=0;i<3;i++){
        if(x==s[i])
        {
            n1=i;
        }
        if(y==s[i]){
            n2=i;
        }
    }
    if(n1<n2)
        cout<<x<<endl;
    else
        cout<<y<<endl;

}
return 0;

}
