#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include "Hash.h"

unsigned long bernstein(std::string str, int M)
{
	unsigned long b_hash = 5381;
	for (int i = 0; i < (int) str.length(); ++i)
	{
		b_hash = (b_hash * 33 + str[i])+b_hash;
	}
	return b_hash % M;
}

float hash_goodness(std::string str, int M)
{
    std::vector<int> array(M);	// Hint: This comes in handy
	int permutation_count = 0;
	float goodness = 0;
	do {
		if (permutation_count == M) break;
		array[bernstein(str,M)]++;
		permutation_count++;

	} while(std::next_permutation(str.begin(), str.end()));
	float coli =0;
	for(int i : array){
        if(i>1)
            coli+= (i-1);
	}


    goodness = coli/M;

	return goodness;
}
/*
int main()
{
    std::string s = "arbitrary";
	for (int i = 51; i <= 100; ++i)
	{
        std::cout<<"Goodness of hash Bernstein hash function for \""<<s<<"\" with range="<<i<<" is: "<<hash_goodness(s,i)<< std::endl;
	}

}*/
