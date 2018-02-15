#ifndef BAR_H
#define BAR_H
#include <string>
#include "Foo.h"

using namespace std;

namespace potd{
    class Bar{
    public:
        Bar(string name);
        Bar(const Bar & b);
        Bar & operator=(const Bar &);
        ~Bar();
        string get_name();
    private:
        Foo * f_;

    };
}
#endif
