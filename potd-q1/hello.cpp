#include "hello.h"
std::string hello(){
    int age= 19;
    std :: string name = "Noah";
    std :: string str = "Hello world! My name is ";
    str += name;
    str += " and I am ";
    str += age;
    str +=" years old.";
    return str;
}
