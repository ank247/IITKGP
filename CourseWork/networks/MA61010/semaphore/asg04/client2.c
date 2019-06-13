

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int p,y,i,j=0,count;
 p=semget(0,1,IPC_CREAT|0666);
 printf("semaphore no=%d\n",p);
 count=0;
 do
 {
  count=semctl(p,0,GETVAL,0);  
 }while(count==0);
 y=count;
 printf("Hurray!,Got the count:%d\n",count);
 do
 {
  i=y;
  do
  {
   y=semctl(p,0,GETVAL,0);
  }while(i==y);
  printf("output:%d\n",y);
  j+=1;
 }while(j<count);
}


