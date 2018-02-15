#include "Bar.h"
#include <string>

using namespace potd;
using namespace std;

Bar::Bar(string name) {
    f_ = new Foo(name);
}

Bar::Bar(const Bar & b) {
    this->f_ = new Foo(b.f_->get_name());
}

Bar::~Bar() {
    delete(f_);
}

Bar& Bar::operator=(const potd::Bar &b) {
    delete(this->f_);
    this->f_ = new Foo(b.f_->get_name());
    return *this;
}

string Bar::get_name() {
    return f_->get_name();
}
