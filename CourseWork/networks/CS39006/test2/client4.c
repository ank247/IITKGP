
/*
 * For public ledger each node will have linkedlist to add transactions.
 *
 *
 *
 */

#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/net.h>

struct Node{
  int num;
  struct Node* next;
};

struct Node* head=NULL;

void linkedList(int num){
 struct Node*node;
 node->num=num;
 node->next=head;
 printf("%d ",node->num);
 head=node;
}

void printList(){
 
}

void sys_init(){
  int amount=100;
}



void initiate_transaction(){

}

void receive_transaction(){

}

void broadcast_transaction(){

}

void validate_transaction(){

}

void vote_transaction(){

}

void receive_vote(){

}

void broadcast_vote(){

}

void reach_consensus(){

}

main()
{
  int i, n, j;
  int sockfd,sock;
  struct sockaddr_in self_addr;
  sockfd=socket(AF_INET,INADDR_ANY,0);
  self_addr.sin_family=AF_INET;
  self_addr.sin_addr.s_addr=INADDR_ANY;
  printf("Enter self port no.: ");
  scanf("%d",self_addr.sin_port);
  sock=bind(sockfd,(struct sockaddr*)&self_addr,self_addr.sin_port); 

  n=5;
  while(n--){
    printf("Give No.: ");
    scanf("%d",&i);
    linkedList(i);
  }
  return 0;
} 
