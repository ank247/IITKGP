

#include<stdio.h>
#include<sys/sem.h>

main()
{
 int p,x,i=0,n;
 printf("Give semaphore no");
 scanf("%d",&p);
 printf("Enter no. to be sent:");
 scanf("%d",&n);
 semctl(p,0,SETVAL,n);
 do
 {
  printf("give a no. to send:");
  scanf("%d",&x);
  semctl(p,0,SETVAL,x);
  i+=1;
 }while(i<n);
}


