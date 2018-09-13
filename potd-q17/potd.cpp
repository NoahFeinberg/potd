#include "potd.h"
#include <iostream>

using namespace std;

void insertSorted(Node **head, Node *insert) {
  if((*head)== nullptr){
    (*head) = insert;
     return;
  }
  if((*head)!= nullptr &&insert->data_<(*head)->data_){
    insert->next_ = (*head);
    (*head) = insert;
    return;
  }
  while((*head)->next_ != nullptr&& insert->data_>(*head)->next_->data_ ){
    head = (&(*head)->next_);
  }
  insert->next_= (*head)->next_;
  (*head)->next_ = insert;


}
