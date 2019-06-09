
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,sum[2],p,r=0;
 char q[200];
 struct sockaddr_in sa;
 len=sizeof(sa);
 sockfd=socket(AF_INET,SOCK_STREAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 printf("Give server port no.:\n");
 scanf("%d",&a);
 sa.sin_port=a;
 i=connect(sockfd,(struct sockaddr *)&sa,len);
 recv(sockfd,sum,8,0);
 p=sizeof(sum)/sizeof(sum[0]);
 a=0;
 for(i=0;i<p;i++)
 {
  printf("%d",sum[i]);
  a+=sum[i];
 }
 printf("\n");
 send(sockfd,&a,4,0);
 recv(sockfd,&p,4,0);
 printf("%d\nEnter no.:",p);
 scanf("%d",&i);
 r=p+i;
 send(sockfd,&r,4,0);
 p=p-i;
 send(sockfd,&p,4,0);
 return 0;
}



