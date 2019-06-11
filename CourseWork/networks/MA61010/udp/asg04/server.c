
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,a,len,i,b,c;
 struct sockaddr_in sa,ta,ca,pa,la;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=INADDR_ANY;
 printf("Give self port no.:");
 scanf("%d",&sa.sin_port);
 len=sizeof(sa);
 i=bind(sockfd,(struct sockaddr *)&sa,len);
 printf("(%d %d)\n",sockfd,i);
 recvfrom(sockfd,&a,4,0,(struct sockaddr *)&ta,&len);
 recvfrom(sockfd,&b,4,0,(struct sockaddr *)&ca,&len);
 recvfrom(sockfd,&c,4,0,(struct sockaddr *)&pa,&len);
 recvfrom(sockfd,&i,4,0,(struct sockaddr *)&la,&len);
 if(ta.sin_port==ca.sin_port)
 {
  a=(b+a)*(c+i); 
  sendto(sockfd,&a,4,0,(struct sockaddr *)&ta,sizeof(ta));
  sendto(sockfd,&a,4,0,(struct sockaddr *)&pa,sizeof(pa)); 
 }
 else if(pa.sin_port==ca.sin_port)
 {
  a=(c+b)*(a+i);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&ta,sizeof(ta));
  sendto(sockfd,&a,4,0,(struct sockaddr *)&pa,sizeof(pa));
 }
 else if(pa.sin_port==ta.sin_port)
 {
  a=(b+i)*(c+a);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&ta,sizeof(ta));
  sendto(sockfd,&a,4,0,(struct sockaddr *)&ca,sizeof(ca));
 } 
}


