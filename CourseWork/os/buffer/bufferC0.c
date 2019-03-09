#include<stdio.h>
#include<fcntl.h>
main()
{
FILE *fs;
fs=fopen("a.txt","w");
write(3,"PORST",5);
fprintf(fs,"A");
lseek(3,2,SEEK_SET);
fflush(fs);
write(3,"Z",1);
}
