#include<stdio.h>
#include<fcntl.h>

main()
{
int fd,i;
char a[10];
a[3]=78;
fd=open("f2.txt",O_RDONLY);
i=read(fd,a,5);
printf("%d %d %d",i,a[0],a[1]);
printf("%d %d",a[2],a[3]);
}

