#include "Node.h"

using namespace std;

void sortList(Node **head) {
    int i = 0;

    while(i != (*head)->getNumNodes()){
        Node ** iter = head;
        i = 0;
        while(*iter !=NULL){
            if((*iter)->next_ != NULL){
                if((*iter)->data_ <(*iter)->next_->data_){
                    i++;
                }
                else{
                    Node * temp = (*iter)->next_->next_;
                    (*iter)->next_->next_ = (*iter);
                    (*iter)= (*iter)->next_;
                    (*iter)->next_->next_ = temp;

                }
                iter = (&(*iter)->next_);
            }
            else{
                i++;
                iter = (&(*iter)->next_);
            }
        }

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

