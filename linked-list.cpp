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
    this->node_val = node_val;
  }
  
    
private:
  Node *next;
  int node_val = NULL;
};

class LinkedList{
public:
  LinkedList(){
    head = (Node *) malloc(sizeof(Node));
    head->setNext(NULL);
  }
  
  void add(int node_val){
    Node* cur = head;
    while (cur->getNext() != NULL){
      cur = cur->getNext();
    }
    if (cur->getData() == NULL){
      cur->setData(node_val);
    } else { 
      Node *new_node = (Node *)malloc(sizeof(Node));
      new_node->setData(node_val);
      new_node->setNext(NULL);
      cur->setNext(new_node);
    }
  }

  /**
   * prints list contents to console
   */
  void printList(){
    Node* cur = head;
    while(cur != NULL){
      printf("%d, ", cur->getData());
      cur = cur->getNext();
    }
    printf("\n");
  }

private:
  Node *head;
};


int main(int argc, char** argv){
  LinkedList linkedList;
  linkedList.add(1);
  linkedList.add(2);
  linkedList.printList();
  return(0);
}
