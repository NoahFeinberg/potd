#include "Hash.h"
#include <string>
#include <iostream>
#include<algorithm>

unsigned long bernstein(std::string str, int M)
{
	unsigned long b_hash = 5381;
	for(auto c : str){
        b_hash = (b_hash << 5) + b_hash + c;
	}

	return b_hash%M;
}

std::string reverse(std::string str)
{
    std::string output = "";
	for(int i = str.size()-1; i>=0; i--){
        output += str[i];
	}

	return output;
}


//#include "Hash.h"
//
//int main()
//{
//
//    std::string s = "POTS";
//	int M = 13;
//    std::cout<<"Bernstein hash of "<<s<<" with range "<<M<<" is: "<<bernstein(s, M)<<'\n';
//    std::cout<<"Bernstein hash of the reverse of "<<s<<" - " <<reverse(s)<<" - with range "<<M<<", is: "<<bernstein(reverse(s), M)<<'\n';
//}
