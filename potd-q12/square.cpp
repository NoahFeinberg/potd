#include <iostream>
#include <string>
using namespace std;

#include "square.h"

Square::Square() {
    name = "mysquare";
    lengthptr = new double;
    *lengthptr = 2.0;
}

void Square::setName(string newName) {
  name = newName;
}

void Square::setLength(double newVal) {
  *lengthptr = newVal;
}

string Square::getName() const {
  return name;
}

double Square::getLength() const {
  return *lengthptr;
}

Square::Square(const Square & other) {
    name = other.getName();
    lengthptr = new double;
    *lengthptr = other.getLength();
}

Square::~Square() {
    delete lengthptr;
}

Square & Square:: operator=(const Square & other){

    delete [] lengthptr;
    lengthptr = new double;
    *lengthptr = *other.lengthptr;
    name = other.name;
    return *this;

}
Square Square::operator+(const Square & other){
    name = name+ other.name;
    *lengthptr =*lengthptr+ *other.lengthptr;
    return *this;
}
