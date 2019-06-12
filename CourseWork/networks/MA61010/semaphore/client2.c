
#include<stdio.h>
#include<sys/sem.h>

main()
{
 int p,x;
 p=semget(0,1,IPC_CREAT|0666);
 printf("semaphore no=%d\n",p);
 scanf("%d",&x);
 semctl(p,0,SETVAL,x);
}


