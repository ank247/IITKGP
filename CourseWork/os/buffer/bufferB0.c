#include<stdio.h>
#include<fcntl.h>
main()
{
int i;
FILE *fs;
fs=fopen("a.txt","w");
for(i=1;i<=4100;i++)
fprintf(fs,"A");
write(3,"Y",1);
}
