#include<stdio.h>
#include<string.h>
int main()
{
    char m[105];
   scanf("%s",m); 

    int p=strlen(m), i, x=0;

    for(i=0; i<p; i++){
        if((m[i]=='H')||(m[i]=='Q')||(m[i]=='9')){
      printf("YES");
      x++;
      break;
        }
    }
    if(x==0) printf("NO");
     
    return 0;
}