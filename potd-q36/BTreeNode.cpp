#include <vector>
#include "BTreeNode.h"


std::vector<int> traverse(BTreeNode* root) {
    std::vector<int> v;
    if(root->is_leaf_){
        /*
        while(!root->elements_.empty()){
            int val = root->elements_.back();
            v.push_back(val);
            root->elements_.pop_back();
        }*/
        for(int i : root->elements_){
            v.push_back(i);
        }
        return v;
    }
    /*
    int i = root->children_.size()%2;
    while(!root->children_.empty()){
        if(i%2 == 1){
            BTreeNode * node = root->children_.back();
            std::vector<int> elem = traverse(node);
            for(int val : elem){
                v.push_back(val);
            }
            while(!elem.empty()){
                int val = elem.back();
                v.push_back(val);
                elem.pop_back();
            }
            root->children_.pop_back();
            i--;
        }
        else{
            int val = root->elements_.back();
            v.push_back(val);
            root->elements_.pop_back();
            i++;
        }
    } */
    std::vector<int>::iterator woo = root->elements_.begin();
    //for(std::vector<BTreeNode *>::iterator node = root->children_.begin(); node!= root->children_.end();){
    for(BTreeNode * node :root->children_){
        std::vector<int> elem = traverse(node);
        for(int val : elem){
            v.push_back(val);
        }

        if(woo !=root->elements_.end()){
            v.push_back(*woo);
            woo++;
        }
        //node++;
    }

    return v;
}

