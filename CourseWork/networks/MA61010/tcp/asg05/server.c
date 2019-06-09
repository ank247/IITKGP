
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,fd,len,i,p[2],n;
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
 printf("Enter 2 nos.:\n");
 scanf("%d %d",&p[0],&p[1]);
 send(fd,p,8,0);
 recv(fd,&n,4,0);
 printf("%d\n",n);
 n=2*n;
 send(fd,&n,4,0);
 recv(fd,&n,4,0);
 printf("%d\n",n);
 recv(fd,&n,4,0);
 printf("%d\n",n);
 return 0;
}


