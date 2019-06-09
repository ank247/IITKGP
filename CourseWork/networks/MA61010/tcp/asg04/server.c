
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
 recv(fd,p,8,0);
 n=sizeof(p)/sizeof(p[0]);
 for(i=0;i<n;i++)
 printf("%d\n",p[i]);
 return 0;
}


