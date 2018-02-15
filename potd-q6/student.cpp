#include "student.h"
#include <string>
#include <iostream>

using namespace std;
namespace potd{
    Student::Student(){
        name_ = "Ravi";
        grade_ = 5;
    }
    string Student::get_name(){
        return name_;
    }
    void Student::set_name(string newName){
        name_ = newName;
    }
    int Student::get_grade(){
        return grade_;
    }
    void Student::set_grade(int grade){
        grade_ = grade;
    }
}
