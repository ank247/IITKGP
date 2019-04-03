#include<stdio.h>
#include<string.h>
main()
{
  char x[20];
  int a[200];
  do{
      scanf("%s", x);
      if((x[1]=='=')&&(x[3]=='+'))
       {
         a[x[0]]=a[x[2]]+a[x[4]];
       }
       if((x[1]=='=')&&(x[2]<60))
       {
         a[x[0]]=x[2]-48;
       }
       if(x[1]=='r')
       {
         printf("%d\n",a[x[6]]);
         sleep(1);
       }
    }while(1);
}

/*
Input:
k=7
m=2
u=k+m
print(u)

Output: 9
*/
