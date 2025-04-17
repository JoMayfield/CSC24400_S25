// File containing class definition for Node in a Binary Search Tree
#ifndef _BST_NODE_HPP_
#define _BST_NODE_HPP_

#include <iostream>
using namespace std;

class BST_Node {
    private:
        // A node is made up of:
        int _data; // Integer data
        BST_Node* _left; // A pointer to the left child
        BST_Node* _right; // A pointer to the right child

    public:
        // Default constructor - data is set to 0
        BST_Node(): _data(0), _left(nullptr), _right(nullptr) {}

        // Parameterized constructor - data is set to specified value
        BST_Node(int value): _data(value), _left(nullptr), _right(nullptr) {}

        // "get" and "set" methods for data
        int ndata() const {return _data;}
        int& ndata() {return _data;}

        // "get" and "set" methods for left child
        BST_Node* left() const {return _left;}
        BST_Node*& left() {return _left;}

        // "get" and "set" methods for right child
        BST_Node* right() const {return _right;}
        BST_Node*& right() {return _right;}
};

#endif
