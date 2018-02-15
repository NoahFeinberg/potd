#include "thing.h"

namespace potd{
Thing :: Thing(int i){
    this->props_ct_ = 0;
    this->props_max_ = i;
    this->properties_  = new std::string[i];
    this->values_ = new std::string[i];
}

void Thing::_copy(const Thing & t){
    this->props_ct_ = t.props_ct_;
    this->props_max_ = t.props_max_;
    this->properties_  = new std::string[t.props_max_];
    this->values_ = new std::string[t.props_max_];
    for(int p = 0; p< t.props_ct_; p++){
        this->properties_[p]  = t.properties_[p];
        this->values_[p] = t.values_[p];
    }
}

void Thing::_destroy(){
    delete [] properties_;
    delete [] values_;
    properties_ = NULL;
    values_ = NULL;
}

Thing :: Thing(const Thing & t){
    this->_copy(t);
}

Thing & Thing :: operator=(const Thing & t){
    this->_destroy();
    this->_copy(t);

    return *this;
}

Thing :: ~Thing(){
    this->_destroy();
}

int Thing :: set_property(std::string name,std::string values){
    for(int i = 0; i< this->props_ct_; i++){
        if(this->properties_[i] == name){
            this->values_[i] = values;
            return i;
        }
    }
    if(props_ct_ == props_max_)
        return -1;
    this->values_[props_ct_] = values;
    this->properties_[props_ct_] = name;
    props_ct_++;
    return (props_ct_-1);
}

std::string Thing :: get_property(std::string name){
    for(int i = 0; i< this->props_ct_; i++){
        if(this->properties_[i] == name){
            return this->values_[i];
        }
    }
    return "";
}

}
