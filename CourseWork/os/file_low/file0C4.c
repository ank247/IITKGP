
#include<stdio.h>
#include<fcntl.h>

main()
{
int fd,i;
char fn[20];
printf("Give filename");
gets(fn);
fd=open(fn,O_WRONLY);
lseek(fd,3,SEEK_SET);
write(fd,"02BCD",1);
//lseek(fd,2,SEEK_CUR);
//write(fd,"KLC",2);
}

