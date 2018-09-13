#include "Node.h"
#include <iostream>
using namespace std;

void mergeList(Node *first, Node *second) {
    Node **iter = &first;
    Node *temp1= first;
    Node *temp2= second;
    if(first == NULL){
        first = second;
        return;
    }
    if(second ==NULL){
        return;
    }
    while(temp1 != NULL && temp2 != NULL){
        cout<<temp1->data_<<endl;
        temp1 =(*iter)->next_;
        (*iter)->next_ = temp2;
        if((*iter)->next_ != NULL){
            iter = &((*iter)->next_);
            cout<<temp2->data_<<endl;
            temp2 = (*iter)->next_;
            (*iter)->next_ = temp1;
            if((*iter)->next_ != NULL)
                iter = &((*iter)->next_);
        }
        else{
            cout<<"null"<<endl;
            temp2=(*iter)->next_;
        }
    }
    if(temp2 != NULL){
        (*iter)->next_ = temp2;
    }

}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
void printList(Node *head) {
  if (head == NULL) {
    cout << "Empty list" << endl;
    return;
  }

  Node *temp = head;
  int count = 0;
  while(temp != NULL) {
    cout << "Node " << count << ": " << temp ->data_ << endl;
    count++;
    temp = temp->next_;
  }
}
