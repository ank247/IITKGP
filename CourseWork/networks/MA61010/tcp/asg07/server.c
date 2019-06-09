
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,fd,len,i,p;
 char b[200];
 struct sockaddr_in sa,ca;
 len=sizeof(sa);
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=INADDR_ANY;
 printf("Give self port no.:");
 scanf("%d",&sa.sin_port);
 i=bind(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 listen(sockfd,5);
 fd=accept(sockfd,(struct sockaddr *)&ca,&len);
 printf("[%d]\n",fd);
 while(recv(fd,&p,4,0))
 {
  recv(fd,&p,4,0);
  if(p%2==0)
  {
   p=p*2;
   send(fd,&p,4,0);
  }
  else
  {
   printf("%d\n",p);   
  }
 }
 return 0;
}


