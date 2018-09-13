#include"potd.h"
string getFortune(const string &s){
    if(s.length()%5 ==0){
        return "I'm mister meseeks look at me!";
    }
    if(s.length()%5 ==1){
        return "Domo arigato";
    }
    if(s.length()%5 ==2){
        return "Dui bu qi";
    }
    if(s.length()%5 ==3){
        return "Wo de zhong wen bu hao!";
    }
    if(s.length()%5 ==4){
        return "Come and have a go if you think your hard enough!";
    }
}
