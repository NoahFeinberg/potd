#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"

class Derived : public Base
{
    public:
        string foo();
        virtual string bar();
};

#endif // DERIVED_H
