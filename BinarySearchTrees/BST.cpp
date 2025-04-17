// File containing implementation for Binary Search Tree
//    methods and functions
#include "BST_Node.hpp"
#include "BST.hpp"

// Helper function to print a tree. Prints the nodes in the tree
//    in ascending sorted order
// This is an in-order traversal! Nodes are visited IN order
// Returns nothing (its only job is to print)
void inOrderPrint(BST_Node* subTreeRoot)
{
    // If there is a left child
    if(subTreeRoot->left() != nullptr)
        // Traverse the left subtree
        inOrderPrint(subTreeRoot->left());

    // Visit current node (print it)
    cout << " " << subTreeRoot->ndata() << " ";

    // If there is a right child
    if(subTreeRoot->right() != nullptr)
        // Traverse the right subtree
        inOrderPrint(subTreeRoot->right());

    return;
}

// print() method calls inOrderPrint() function
void BST::print() const
{
    inOrderPrint(_root);
    cout << endl;
    return;
}

// Helper function to find a node, starting our search
//    at subTreeRoot and traversing left or right accordingly
// Returns a pointer to the node if found and null otherwise
BST_Node* findHelper(BST_Node* subTreeRoot, const int valToFind)
{
    // BASE CASE - value not in tree
    if(subTreeRoot == nullptr)
        return nullptr;

    // RECURSIVE CASE - value less than current node
    // Look down the left subtree
    if(valToFind < subTreeRoot->ndata())
        return findHelper(subTreeRoot->left(), valToFind);

    // RECURSIVE CASE - value greater than current node
    // Look down the right subtree
    else if(valToFind > subTreeRoot->ndata())
        return findHelper(subTreeRoot->right(), valToFind);

    // BASE CASE - we found the node!!!
    else //if valToFind == subTreeRoot->ndata()
        return subTreeRoot;
}

// find() method calls findHelper() function
BST_Node* BST::find(const int valToFind) const
{
    return findHelper(_root, valToFind);
}

// Helper function to insert a node into a BST
// Takes two arguments:
//    subTreeRoot is the root of the current subtree
//    valToAdd is the value to insert into the tree
// Returns a pointer to the updated subtree root
BST_Node* insertHelper(BST_Node* subTreeRoot, int valToAdd)
{
    // BASE CASE - empty spot for us to insert the new value
    if(subTreeRoot == nullptr)
    {
        // Create node
        BST_Node* newSubTree = new BST_Node(valToAdd);
        // Return new node
        return newSubTree;
    }

    // RECURSIVE CASE - valToAdd is less than current node
    // So valToAdd should be in the left subtree
    if(valToAdd < subTreeRoot->ndata())
    {
        // Recurse on the left half of the tree
        BST_Node* updatedSubTree = insertHelper(subTreeRoot->left(), valToAdd);
        // Update the current node's left child to be the version
        //   of the tree that has the new node
        subTreeRoot->left() = updatedSubTree;
        // Return updated subtree
        return subTreeRoot;
    }
    // RECURSIVE CASE - valToAdd is greater than current node
    // So valToAdd should be in the right subtree
    else if(valToAdd > subTreeRoot->ndata())
    {
        // Recurse on the right half of the tree
        BST_Node* updatedSubTree = insertHelper(subTreeRoot->right(), valToAdd);
        // Update the current node's right child to be the version
        //   of the tree that has the new node
        subTreeRoot->right() = updatedSubTree;
        // Return updated subtree
        return subTreeRoot;
    }
    // BASE CASE - node is already in tree
    // Assuming we do not want to allow duplicates,
    //    let's just return the current subtree
    //    without changing anything
    else //if valToAdd == subTreeRoot.ndata()
    {
        return subTreeRoot;
    }
}

// insert() method calls insertHelper() function
void BST::insert(const int newVal)
{
    _root = insertHelper(_root, newVal);
    return;
}


// Helper function to remove a node from a BST
// Takes two arguments:
//    subTreeRoot is the root of the current subtree
//    valToRemove is the value to remove from the tree
// Returns a pointer to the updated subtree root
BST_Node* removeHelper(BST_Node* subTreeRoot, int valToRemove)
{
    // RECURSIVE CASE - valToRemove is in the left subtree
    if(valToRemove < subTreeRoot->ndata()) 
    {
        // Recurse on the left half of the tree
        // Update the current node's left child to be the
        //    version of the tree without the deleted node
        subTreeRoot->left() = removeHelper(subTreeRoot->left(), valToRemove);
        // Return updated subtree
        return subTreeRoot;
    }
    // RECURSIVE CASE - valToRemove is in the right subtree
    else if(valToRemove > subTreeRoot->ndata())
    {
        // Recurse on the right half of the tree
        // Update the current node's right child to be the
        //    version of the tree without the deleted node
        subTreeRoot->right() = removeHelper(subTreeRoot->right(), valToRemove);
        // Return updated subtree
        return subTreeRoot;
    }
    // BASE CASE - Found the node to be deleted!
    else
    {
        // CASE 1: NODE TO BE DELETED HAS NO CHILD
        if(subTreeRoot->left() == nullptr && subTreeRoot->right() == nullptr)
        {
            return nullptr;
        }
        // CASE 2: NODE TO BE DELETED HAS ONE CHILD (A RIGHT CHILD)
        else if(subTreeRoot->left() == nullptr)
        {
            return subTreeRoot->right();
        }
        // CASE 2: NODE TO BE DELETED HAS ONE CHILD (A LEFT CHILD)
        else if(subTreeRoot->right() == nullptr)
        {
            return subTreeRoot->left();
        }
        // CASE 3: NODE TO BE DELETED HAS TWO CHILDREN
        else
        {
            // Need to keep track of two things:
            //    1. The node that will replace the deleted node
            //    2. The parent of node (1) ^
            BST_Node* parentOfRN = subTreeRoot;
            BST_Node* replacementNode = parentOfRN->right();

            // If the temp replacement node has no left child
            // Then the temp replacement node must be the
            //    successor of the node to be deleted
            if(replacementNode->left() == nullptr)
                // Let's make the parent skip past the replacement node
                parentOfRN->right() = replacementNode->right();
            else
            {
                // As long as we can keep traversing left
                while(replacementNode->left() != nullptr)
                {
                    // Traverse left for both temp vars
                    parentOfRN = replacementNode;
                    replacementNode = replacementNode->left();
                }
                // The parent of the replacement node should skip past it
                //    and point to the replacement's right child
                // (It's okay if this value is nullptr!)
                parentOfRN->left() = replacementNode->right();
            }
            // Replace the current (to-be-deleted) node with 
            //    the replacement node
            subTreeRoot->ndata() = replacementNode->ndata();
            // Return updated subtree
            return subTreeRoot;
        }
    }
}

// remove() method calls removeHelper() function
void BST::remove(const int valToRemove)
{
    _root = removeHelper(_root, valToRemove);
}
