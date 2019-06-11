
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,a,len,i,b;
 struct sockaddr_in sa,ta;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=INADDR_ANY;
 printf("Give self port no.:");
 scanf("%d",&sa.sin_port);
 len=sizeof(sa);
 i=bind(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 while(1)
 {
  recvfrom(sockfd,&a,4,0,(struct sockaddr *)&ta,&len);
  printf("received %d from port %d\n",a,ta.sin_port);
  a=a*2;
  sendto(sockfd,&a,4,0,(struct sockaddr *)&ta,sizeof(ta));
 }
}


