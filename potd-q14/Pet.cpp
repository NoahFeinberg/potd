#include "Pet.h"

using namespace std;
Pet::Pet():Animal("cat","fish"){
    this->name_="Fluffy";
    this->owner_name_ = "Cinda";
}

Pet::Pet(string type, string food,string n, string owner):Animal(type, food){
    name_= n;
    owner_name_ = owner;
}

string Pet :: getFood(){
    return food_;
}

string Pet ::getName(){
    return name_;
}
string Pet ::getOwnerName(){
    return owner_name_;
}

void Pet :: setFood(string f){
    this->food_ =f;
}
void Pet:: setName(string n){
    this->name_ = n;
}
void Pet::setOwnerName(string o){
    this->owner_name_ = o;
}

string Pet ::print(){
    string cheese = "My name is ";
    cheese += name_;
    return cheese;
}

