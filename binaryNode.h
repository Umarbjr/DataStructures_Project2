#include<iostream>
#ifndef NODE
#define NODE
using namespace std;

template<class T> 
class binaryNode {
    public:
    T data;
    binaryNode<T> * left; 
    binaryNode<T> * right; 
    
    binaryNode() { 
        left = nullptr;
        right = nullptr;
    }

    binaryNode(T x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }

    ~binaryNode(){ 
        delete left;
        delete right;
    }
};
#endif
