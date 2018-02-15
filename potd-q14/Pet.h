#ifndef _PET_H
#define _PET_H

#include "Animal.h"
using namespace std;

class Pet: public Animal{

    private:
        string name_;
        string owner_name_;
    public:
        Pet();
        Pet(string type, string food,string n, string owner);
        void setFood(string f);
        void setName(string n);
        void setOwnerName(string o);
        string getFood();
        string getName();
        string getOwnerName();
        string print();

};

#endif
