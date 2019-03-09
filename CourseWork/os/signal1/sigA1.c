#include<stdio.h>
#include<signal.h>

void a(){printf("A\n");}
void p(){printf("B\n");}
void g(){printf("C\n");}
void u(){printf("D\n");}

main()
{
int i=getpid();
printf("id=%d\n",i);
signal(SIGINT,a);
signal(SIGQUIT,p);
signal(SIGUSR1,g);
signal(SIGKILL,u);
for(i=1;i>0;i++)
{
printf("%d\n",i);
sleep(1);
}
}
