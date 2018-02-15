#include <string>
#include <iostream>
#include <math.h>

namespace potd {
    int *raise(int *arr){
        int x = sizeof(arr);
        int * temp = new int[x];
        for(int i = 0; i<x; i++){
            if(arr[i]<0 || i+1 ==x){
                temp[i] = arr[i];
            }
            else if(arr[i+1]<0){
                temp[i] = arr[i];
            }
            else{
                temp[i] = pow(arr[i],arr[i+1]);
            }
        }
        return temp;
    }
}
