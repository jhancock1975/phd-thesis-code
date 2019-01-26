#include <stdio.h>
#include <stdlib.h>
class Node{
public:
  Node* getNext(){
    return(next);
  }

  void setNext(Node *node){
    next = node;
  }

  int getData(){
    return node_val;;
  }

  void setData(int node_val){
    node_val = node_val;
  }
  
    
private:
  Node *next;
  int node_val;
};

class LinkedList{
public:
  LinkedList(){
    head = (Node *) malloc(sizeof(Node));
    head->setNext( NULL);
  }
  
  void add(int node_val){
    Node cur = head;
    while(cur->getNext() != NULL){
      cur = cur->getNext();
    }
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->setData(node_val);
    new_node->setNext(NULL);
    cur->setNext(new_node);
  }

private:
  Node *head;
};


int main(int argc, char** argv){
  LinkedList linkedList;
  return(0);
}
