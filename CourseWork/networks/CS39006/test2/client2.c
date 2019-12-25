
/*
 * For public ledger each node will have linkedlist to add transactions.
 *
 *
 *
 */

#include<stdio.h>
#include<net.h>
#include<sys/types.h>
#include<>

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
  n=5;
  while(n--){
    printf("Give No.: ");
    scanf("%d",&i);
    linkedList(i);
  }
  return 0;
} 
