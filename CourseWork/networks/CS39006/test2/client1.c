
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
  int constant=100;
  struct Node*next = Null;
};



struct linkedList{
  struct Node*node;
  while(node->next != Null)
  {
      node=node->next;
  }
  void append(num)
  {
    node->num=num;
    node=node->next;
  }
};



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

}
