

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int q,y;
 printf("Give semaphore no");
 scanf("%d",&q);
 y=semctl(q,0,GETVAL,0);
 printf("%d",y);
}


