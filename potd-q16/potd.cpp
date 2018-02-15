#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
    int i =0;
    string cheese="";
    if(head == nullptr)
        return "Empty list";
    while(head->next_ !=nullptr )
    {
        cheese += "Node "+to_string(i)+": "+ to_string(head->data_)+" -> ";
        head= head->next_;
        i++;
    }
    cheese+= "Node "+to_string(i)+": "+to_string(head->data_);
    return cheese;


}
