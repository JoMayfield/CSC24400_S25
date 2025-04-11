#ifndef _LLIST_HPP
#define _LLIST_HPP

// This is the header file for our linked list class
#include <iostream>
#include <string>
#include "Node.hpp"
using namespace std;

class LList {
  private:
    Node* _front;
    
  public:
    // Default constructor (no parameters)
    LList() : _front(nullptr) {}
    
    // Get and set
    Node* & front() {return _front;}
    
    // Methods to add to LL
    void addToFront(const string &newVal);
    void addToEnd(const string &newVal);
    
    // Method to remove from LL
    void removeVal(const string &valToRemove);
    
    Node* findNode(const string &valToFind) const;
    
    ostream& print(ostream &os) const;
};

ostream& operator<<(ostream &os, const LList &l);

#endif
