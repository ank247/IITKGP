#include<stdio.h>
#include<signal.h>

main()
{
printf("Give process id");
int a,c;
scanf("%d",&a);
do{
printf("Give choice");
scanf("%d",&c);
if(c==0){kill(a,SIGINT);}
if(c==1){kill(a,SIGQUIT);}
if(c==2){kill(a,SIGUSR1);}
if(c==3){kill(a,SIGKILL);}
if(c==4){kill(a,SIGSTOP);}
if(c==5){kill(a,SIGCONT);}
if(c==6){kill(a,SIGCHLD);}
if(c==7){kill(a,SIGPIPE);}
}while(c!=8);
}
