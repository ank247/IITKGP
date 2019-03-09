#include<stdio.h>
#include<fcntl.h>
main()
{
FILE *fs;
fs=fopen("a.txt","r+");
fscanf(fs,"%c",&c);
printf("%c",c);
write(3,"KKKKKK",6);
i=lseek(3,-2,SEEK_CUR);
lseek(3,i,SEEK_SET);
fscanf(fs,"%c",&c);
printf("%c",c);
fflush(fs);
fscanf(fs,"%c",&c);
printf("%c",c);
}
