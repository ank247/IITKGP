#include<stdio.h>
#include<fcntl.h>

main()
{
int fd1,fd2,i1,i2,i=0;
char c,a[100000],b[100000];
fd1=open("file.txt",O_RDONLY);
fd2=open("f2.txt",O_WRONLY);
i1=read(fd1,a,100000);
i2=read(fd2,b,100000);
lseek(fd1,i,SEEK_SET);
read(fd1,&c,1);
write(fd2,&c,1);
}


