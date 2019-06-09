

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,sum=0;
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
 printf("%d\n",a);
 recv(sockfd,&a,4,0);
 sum+=a;
 printf("%d\n",sum);
 recv(sockfd,&a,4,0);
 sum+=a;
 printf("%d\n",sum);
 send(sockfd,&sum,4,0);
 return 0;
}



