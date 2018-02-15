#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>
#include <iostream>

namespace potd{
    class Student{
        public:
            Student();

            void set_name(std::string newName);
            void set_grade(int grade);
            std::string get_name();
            int get_grade();
        private:
            std::string name_;
            int grade_;
    };
}
#endif
