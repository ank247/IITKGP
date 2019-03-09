
#include<stdio.h>
#include<fcntl.h>

main()
{
int p[2],i; char c;
//p[0]=open("exp",O_RDONLY);
//p[1]=open("exp",O_WRONLY);
pipe(p);
write(p[1],"ABC",3);
lseek(p[0],2,0);
read(p[0],&c,1);
printf("%c",c);
printf("%d %d",p[0],p[1]);
write(p[1],"PQR",3);
//close(p[1]);
for(i=1;i<=4;i++)
{
c='x';
read(p[0],&c,1);
printf("%c",c);
fflush(stdout);
}
}

