
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,a[2],len,i,b,sum=0;
 struct sockaddr_in sa,ta;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=INADDR_ANY;
 printf("Give self port no.:");
 scanf("%d",&sa.sin_port);
 len=sizeof(sa);
 i=bind(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 recvfrom(sockfd,a,8,0,(struct sockaddr *)&ta,&len);
 b=sizeof(a)/sizeof(a[0]);
 for(i=0;i<b;i++)
 sum+=a[i];
 sendto(sockfd,&sum,4,0,(struct sockaddr *)&ta,sizeof(ta));
}


