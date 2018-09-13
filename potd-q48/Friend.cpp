#include "Friend.h"
#include <algorithm>
#include <iostream>
#include <vector>
int find(int x, std::vector<int>& parents) {
    return 0;
}

int findCircleNum(std::vector<std::vector<int>>& M) {
    std::vector<std::vector<int>> g(M.size(),std::vector<int>(M.size(), 0));
    for(int x = 0; x<M.size(); x++){
        g[x][x]=1;
    }
    for(int y = 0; y<g.size(); y++){
        for(int x = 0; x<g.size(); x++){
            if(x != y && M[y][x] == 1||g[y][x] == 1){
                for(int z =0; z<g.size(); z++){
                    if( M[x][z] == 1 || M[y][z] ==1){
                        g[x][z] =1;
                        g[y][z] =1;
                        g[z][x] =1;
                        g[z][y] =1;
                    }
                }
            }
        }
    }

    std::sort( g.begin(), g.end() );
    g.erase( std::unique( g.begin(), g.end() ), g.end() );
    return g.size();
}

