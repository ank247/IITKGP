#include<stdio.h>
#include<fcntl.h>

main()
{
int fd,i,j=0;
char c=' ';
fd=open("file.txt",O_RDONLY);
while(c!='a')
{
i=lseek(fd,j,SEEK_SET);
read(fd,&c,1);
//printf("%d %c",i,c);
j++;
}
printf(" %d",i+1);
}


