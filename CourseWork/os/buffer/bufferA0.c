#include<stdio.h>
#include<fcntl.h>
main()
{
FILE *fs;
fs=fopen("a.txt","w");
fprintf(fs,"pqr");
write(3,"Y",2);
}
