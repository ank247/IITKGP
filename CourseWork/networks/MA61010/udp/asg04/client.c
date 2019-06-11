

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,b,self_port,opp_port;
 struct sockaddr_in sa,ca;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 b=fork();
 if(b!=0)
 {
  sleep(10);
  printf("enter port:\n");
  scanf("%d",&a);
  sa.sin_port=a;
  sleep(20);
  printf("enter no.:");
  scanf("%d",&a);
  sleep(20);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  printf("enter no.:"); 
  scanf("%d",&a);  
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  recvfrom(sockfd,&a,4,0,(struct sockaddr *)&sa,&len);
  printf("%d\n",a);
 }
 else
 {
  printf("enter port:%d\n");
  scanf("%d",&a);
  sa.sin_port=a;
  sleep(20);
  printf("enter no.:"); 
  scanf("%d",&a);
  sleep(20);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  printf("enter no.:"); 
  scanf("%d",&a);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  recvfrom(sockfd,&a,4,0,(struct sockaddr *)&sa,&len);
  printf("%d\n",a);
 }
}



