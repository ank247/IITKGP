
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




#include<stdio.h>

struct Node{
  int num;
  struct Node* next;
};

struct Node* nd=NULL;

void linkedList(int num){
 struct Node node;
 while(node.next!=NULL){
    node.num=node.next;
 } 

   node.num=num;
   node.next=nd;
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
  int i, n;
  n=5;
  while(n--){
    scanf("Give No.: %d",&i);
    linkedList(i);
  }
  return 0;
}







