

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int q,y,i;
 printf("Give semaphore no");
 scanf("%d",&q);
 printf("Input:");
 scanf("%d",&y);
 semctl(q,0,SETVAL,y);
}


