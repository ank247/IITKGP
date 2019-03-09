#include<stdio.h>
#include<fcntl.h>
main()
{
int i;
for(i=1;i<=4100;i++)
{
printf("A");
}
fflush(stdout);
sleep(3);
printf("BBB");
}
