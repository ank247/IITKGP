
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,p[10];
 struct sockaddr_in sa;
 len=sizeof(sa);
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 printf("Give server port no.:\n");
 scanf("%d",&a);
 sa.sin_port=a;
 i=connect(sockfd,(struct sockaddr *)&sa,len);
 printf("Enter 10 nos.");
 for(i=0;i<10;i++)
 {
  scanf("%d",&p[i]);
  send(sockfd,&p[i],4,0);
 }
 return 0;
}


