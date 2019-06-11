

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,b;
 struct sockaddr_in sa;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 printf("Give server port no.:\n");
 scanf("%d",&a);
 sa.sin_port=a;
 printf("Give data to be sent:");
 scanf("%d",&a);
 sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
 printf("Give data to be sent:");
 scanf("%d",&a);
 sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa)); 
 recvfrom(sockfd,&a,4,0,(struct sockaddr *)&sa,&len);
 printf("%d",a);
}


