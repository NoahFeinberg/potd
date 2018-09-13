#include <vector>
#include "Hash.h"

void doubleHashInput(std::vector<int> &v, int elem){
    int l = v.size();
    int i =firstHash(elem,l);
    int ii = i +secondHash(elem);
    if(v[i]!= -1){
        while(v[ii]!=-1){
            ii+=secondHash(elem);
            ii = ii%l;
            if(ii ==i)
                break;
        }
        v[ii]=elem;
    }else{
        v[i]=elem;
    }


}
int firstHash(int elem, int length){
    return elem*4%length;
}
int secondHash(int elem){
    return (3-(elem%3));
}
//make a hash function called firstHash
//make a second function called secondHash
