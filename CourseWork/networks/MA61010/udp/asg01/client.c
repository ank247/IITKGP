
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a[2],b;
 struct sockaddr_in sa;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 printf("Give server port no.:\n");
 scanf("%d",&b);
 sa.sin_port=b;
 printf("Give 2 data to be sent:");
 scanf("%d %d",&a[0],&a[1]);
 sendto(sockfd,a,8,0,(struct sockaddr *)&sa,sizeof(sa));
 recvfrom(sockfd,&b,4,0,(struct sockaddr *)&sa,&len);
 printf("%d",b);
}



