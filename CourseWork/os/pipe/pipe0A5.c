
#include<stdio.h>
#include<fcntl.h>
main()
{
int p[2],i; char c;
pipe(p);
close(p[0]);
printf("%d %d",p[0],p[1]);
write(p[1],"PQR",3);
printf("abc\n");

for(i=1;i<=4;i++)
{
c='x';
read(p[0],&c,1);
printf("%c",c);
fflush(stdout);
}
}

