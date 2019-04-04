
#include<stdio.h>
#include<string.h>
main()
{
  char x[20];
  int a[200];
  do{
      scanf("%s", x);
      if((x[1]=='=')&&(x[2]=='['))
       {
         if(x[3]<60)
         {
           a[x[0]]=a[96+x[3]-48];
         }
         if(x[3]>96)
          {
            a[x[0]]=a[96+a[x[3]]-48];
          }
       }
      if((x[1]=='=')&&(x[2]<60))
       {
         a[x[0]]=x[2]-48;
       }
      if((x[1]<123)&&(x[1]>96))
       {
         a[a[x[1]]+96]=x[4]-48;
       }
      if((x[1]<58)&&(x[1]>48))
       {
         a[96+x[1]-48]=x[4]-48;
       }
    }while(1);
}

/*
Input:
g=4
d=7
e=9
k=[g]
print(k)
Output: 7

c=5
d=6
k=[4]
print(k)
Output: 6

g=4
d=7
e=9
k=[g]
print(k)
Output: 4

when [5]=9
print(e)
Output: 9
*/
