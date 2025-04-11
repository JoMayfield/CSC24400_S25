#include "LList.hpp"
#include "Node.hpp"
using namespace std;

// Adds node with value newVal to the front of the LL
void LList::addToFront(const string &newVal)
{
  Node* newNode = new Node(newVal); // 1. Create node
  newNode->next() = _front; // 2. Make new node point to front of list
  _front = newNode; // 3. Update "front" poinwer
  return;
}

// Adds node with value newVal to the end of the LL
void LList::addToEnd(const string &newVal)
{
  Node* newNode = new Node(newVal); // 1. Create node
  
  // Special case: List is empty
  if(_front == nullptr)
    addToFront(newVal);
  
  // Case: Traverse to end of list
  Node *last = _front; // Array equivalent: "int i = 0;"
  while(last->next() != nullptr) // Array equivalent: "i < n;"
    last = last->next(); // Array equivalent: "i++;"
    
  // Point current last node to new last node
  last->next() =  newNode;
  return;
}

// Removes node with value valToRemove from the LL
void LList::removeVal(const string &valToRemove)
{
  // Have to find the node to remove it
  Node* nodeToRemove = findNode(valToRemove);
  
  // Special case: Trying to remove node that is not in LL
  if(nodeToRemove == nullptr)
    return;
  
  // Special case: Trying to remove first element
  //    (also occurs when LL has only one element)
  if(*(_front->ndata()) == valToRemove)
  {
    _front = _front->next();
    return;
  }
  
  // Case: Every other possibility
  Node* prev = _front; // Start traversal at front of list
  // Peek at next node's value, and exit loop when it is the val to remove
  while (prev != nullptr && *(prev->next()->ndata()) != valToRemove)
  {
    prev = prev->next(); // Get next node in LL
  }
  // Skip over nodeToRemove
  prev->next() = nodeToRemove->next();
  /////prev->next() = prev->next()->next(); // Alternate way to do the same thing

  return;
}

// Finds a node with the value valToFind
// Returns the node if found, nullptr otherwise
Node* LList::findNode(const string &valToFind) const
{
  Node* curr = _front;
  // Iterate over list
  while(curr != nullptr) {
    // Check current node's value
    if(*(curr->ndata()) == valToFind)
      return curr;
    // Get next node in LL
    curr = curr->next();
  }
  return nullptr;
}

// Used to output a Linked List
ostream& LList::print(ostream &os) const
{
  Node* curr = _front;
  // Iterate over list
  while(curr != nullptr) {
    // Output current node
    os << *curr << endl;
    curr = curr->next();
  }
  return os;
}

// Overloaded << operator for LL
ostream& operator<<(ostream &os, const LList &l)
{
  return l.print(os);
}
