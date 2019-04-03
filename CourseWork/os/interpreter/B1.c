
#include<stdio.h>
#include<string.h>

main()
{
  char x[20];
  int a[200], b[200];
  a[122]=1;
  b[122]=2;
  do{
     scanf("%s",x);
     if((x[1]=='=')&&(x[3]=='+'))
      {
        a[x[0]]=a[x[2]]+a[x[4]];
        b[x[0]]=b[x[2]]+b[x[4]];
      }
      if((x[1]=='=')&&(x[2]<60))
      {
        a[x[0]]=x[2]-48;
        b[x[0]]=x[2]-48;
      }
      if(x[1]=='r')
      {
        printf("%d%d\n");
        sleep(1);
      }
  }while(1);
}

/*
Input:
k=7
m=k+z
print(m)
Output: 8 9

k=z+z
k=k+z
k=k+k
print(k)
Output: 6 12
*/
