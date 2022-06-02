#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int a,b,s=1;
    cin>>a>>b;
    int c=a-b;
    if(c==0)
        cout<<1<<endl;
    else
    {{
        for(c;c!=0;c--)
            s=s*32;
    }
        cout<<s<<endl;}
    return 0;
}
