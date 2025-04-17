// File containing class definition for a Binary Search Tree
#ifndef _BST_HPP_
#define _BST_HPP_

#include "BST_Node.hpp"
#include <iostream>

class BST
{
    private:
        // Tree is made up of a pointer to the root
        // (All other nodes can be accessed by traversing
        //    the tree starting at the root)
        BST_Node* _root;

    public:
        // Default constructor - no elements in tree yet
        BST(): _root(nullptr) {}

        // Method to print a BST - uses in-order traversal
        void print() const;

        // Method to find a node in a BST
        BST_Node* find(const int valToFind) const;

        // Method to insert a node into a BST
        void insert(const int newVal);

        // Method to remove a node from a BST
        void remove(const int valToRemove);
};

#endif
