

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int q,y=0,i=-1,count,j=0;
 printf("Give semaphore no");
 scanf("%d",&q);
 count=semctl(q,0,GETVAL,0);
 y=count;
 printf("Hurray!,Got the count:%d\n",count);
 do
 {
  i=y;
  do
  {
   y=semctl(q,0,GETVAL,0);
  }while(i==y);
  printf("output:%d\n",y);
  j+=1;
 }while(j<count);
}


