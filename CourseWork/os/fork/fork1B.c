
#include<stdio.h>

main()
{
fork();
fork();
printf("%d %d",getpid(),getppid());
fork();
printf("%d %d\n",getpid(),getppid());
sleep(2);
}


