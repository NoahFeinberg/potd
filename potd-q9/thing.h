#ifndef THING_H
#define THING_H

#include <string>

namespace potd {
  class Thing {
  public:
    Thing(int i);
    Thing(const Thing & t);
    Thing & operator=(const Thing & other);
    ~Thing();

    int set_property(std::string name,std::string values);
    std::string get_property(std::string name);

  private:

    void _copy(const Thing & other);
    void _destroy();

    std::string *properties_;
    std::string *values_;
    int props_ct_;
    int props_max_;
  };
}
#endif
