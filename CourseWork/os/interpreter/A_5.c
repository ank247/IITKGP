
#include<stdio.h>
#include<string.h>

main()
{
 char x[20];
 int a[200],temp1=0,temp2=0;
 do{
    if(a[x[1]]=='=')
     {
       a[x[0]]=x[2]-48;     
     }
    if((a[x[4]]=='>')&&(a[x[3]]>a[x[5]]))
      {
        if((x[1]=="=")&&(x[3]=="+"))
         {
           a[x[0]]=a[x[2]]+a[x[4]];
         }             
      }
    else if((x[1]=="=")&&(x[2]=="["))
      {
        a[x[0]]=a[49+x[3]];
      }
    if((a[x[1]]=='=')&&(a[x[3]]=='+'))
     {
       a[x[0]]=a[x[2]]+a[x[4]];       
     }
    if(x[1]=="r")
     {
       printf("%d\n",a[x[6]]);
       sleep(1);
     }
 }while(1);
}

