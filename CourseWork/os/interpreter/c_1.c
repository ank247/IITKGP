
#include<stdio.h>
#include<string.h>

main()
{
  char x[20];
  int a[50][200], i, n;
  printf("Give nos. processes");
  scanf("%d", &n);
  do{
     scanf("%s", x);
     for(i=1;i<=n;i++)
      {
        a[i][122]=i;
        a[i][118]=0;
      }
     for(i=1;i<=n;i++)
      {
        if((x[1]=='=')&&(x[3]=='+'))
         {
          a[i][x[0]]=a[i][x[2]]+a[i][x[4]];
         }
        if((x[1]=='=')&&(x[2]<60))
         {
          a[i][x[0]]=x[2]-48;
         }
        if(x[1]=='r')
         {
           printf("%d\n",a[i][x[6]]);
           sleep(1);
         }
      }
    }
 }
 
 /*
  Input:
   k=7
   g=z+z
   g=g+g
   m=k+g
   print(m)
   
   Output: 11 15 19 23 27
 */
