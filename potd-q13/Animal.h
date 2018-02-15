#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal{
    private:
        string type_;
        string food_;
    public:
        Animal();
        Animal(string t,string f);
        string getType();
        string getFood();
        void setFood(string f);
        void setType(string t);
        virtual string print();

};

#endif // ANIMAL_H
