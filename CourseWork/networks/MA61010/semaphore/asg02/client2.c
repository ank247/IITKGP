

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int p,x,i;
 p=semget(0,1,IPC_CREAT|0666);
 printf("semaphore no=%d\n",p);
 printf("give a no. to get:\n");
 x=4;
 semctl(p,0,SETVAL,x);
 while(x==4)
 {
  x=semctl(p,0,GETVAL,0);
 }
  printf("%d\n",x);
}


