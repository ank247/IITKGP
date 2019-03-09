#include<stdio.h>
#include<signal.h>

main()
{
int i=fork(), j=fork();
printf("%d %d",i,j);
if(i!=0 && j!=0)
{
sleep(1);
wait(0);
printf("A\n");
wait(0);
printf("B\n");
wait(0);
printf("C\n");
}
if(i==0 && j!=0)
{
wait(0);
printf("P\n");
sleep(2);
}
if(i!=0 && j==0)
{
sleep(3);
printf("Q\n");
sleep(1);
}
if(i==0 && j==0)
{
sleep(5);
printf("R\n");
}
}

