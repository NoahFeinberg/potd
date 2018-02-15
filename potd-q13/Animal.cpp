#include "Animal.h"

using namespace std;

Animal :: Animal()
{
    type_ ="cat";
    food_ ="fish";
}

Animal :: Animal(string t,string f){
    type_ = t;
    food_ = f;
}

string Animal ::getType(){
    return type_;
}
string Animal :: getFood(){
    return food_;
}
void Animal :: setFood(string f){
    food_ =f;
}
void Animal :: setType(string t){
    type_ = t;
}

string Animal ::print(){
    string chees = "I am a ";
    chees += type_;
    chees+= ".";
    return chees;
}
