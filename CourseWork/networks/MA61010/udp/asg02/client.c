
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

main()
{
 int sockfd,len,i,a,b;
 struct sockaddr_in sa;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 sa.sin_family=AF_INET;
 sa.sin_addr.s_addr=inet_addr("127.0.0.1");
 b=fork();
 if(b!=0)
 {
  sleep(15);
  printf("Give server port no.2:\n");
  scanf("%d",&b);
  sa.sin_port=b;
  sleep(15);
  printf("Give data to be sent1:\n");
  scanf("%d",&a);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  recvfrom(sockfd,&b,4,0,(struct sockaddr *)&sa,&len);
  printf("server1:%d\n",b); 
 }
 else
 {
  printf("Give server port no.1:\n");
  scanf("%d",&b);
  sleep(28);
  sa.sin_port=b;
  printf("Give data to be sent2:\n");
  scanf("%d",&a);
  sendto(sockfd,&a,4,0,(struct sockaddr *)&sa,sizeof(sa));
  recvfrom(sockfd,&b,4,0,(struct sockaddr *)&sa,&len);
  printf("server2:%d\n",b);
 }
 return 0;
}



