
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,a,len,i,b;
 struct sockaddr_in sa,ta,ca;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=INADDR_ANY;
 printf("Give self port no.:");
 scanf("%d",&sa.sin_port);
 len=sizeof(sa);
 i=bind(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 recvfrom(sockfd,&a,4,0,(struct sockaddr *)&ta,&len);
 b=a;
 recvfrom(sockfd,&a,4,0,(struct sockaddr *)&ca,&len);
 sendto(sockfd,&a,4,0,(struct sockaddr *)&ta,sizeof(ta));
 sendto(sockfd,&b,4,0,(struct sockaddr *)&ca,sizeof(ca));
}


