

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a;
 char q[200];
 struct sockaddr_in sa;
 len=sizeof(sa);
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 printf("Give server port no.:");
 scanf("%d",&a);
 sa.sin_port=a;
 i=connect(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 printf("Give a number for server");
 scanf("%d",&a);
 send(sockfd,&a,4,0);
 recv(sockfd,q,50,0);
 printf("\nserver sent %s\n",q);
 return 0;
}



