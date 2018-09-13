#include "Node.h"
#include <iostream>
using namespace std;

bool in(int d, Node *uList){
    if(uList == NULL)
        return false;
    Node ** u = &(uList);
    while((*u) != NULL){
        if((*u)->data_ == d)
            return true;
        u = &((*u)->next_);
    }
    return false;
}

Node *listUnion(Node *first, Node *second) {

    if(first ==NULL && second == NULL)
        return NULL;
    Node ** f;
    Node ** s;
    Node * listU;
    Node ** u;


    if(first != NULL){
        f =&first;
        listU= new Node(**f);
        u = &listU;
        (*u)->next_ = NULL;
        f = &((*f)->next_);

        while((*f)!= NULL){
            if(!in((*f)->data_, listU)){
                (*u)->next_ =new Node(**f);
                u = &((*u)->next_);
                (*u)->next_ = NULL;
            }
            f = &((*f)->next_);
        }
    }
    if(second != NULL){
        s =&second;
        if(first == NULL){
            listU= new Node(**s);
            u = &listU;
            (*u)->next_ = NULL;
            s = &((*s)->next_);
        }
        while((*s) != NULL){
            if(!in((*s)->data_, listU)){
                (*u)->next_ =new Node(**s);
                u = &((*u)->next_);
                (*u)->next_ = NULL;
            }
            s = &((*s)->next_);
        }

    }
    return listU;
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

