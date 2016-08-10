#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

class BinarySearchTree {
public:
    BinarySearchTree(int val, BinarySearchTree * parent=NULL)
        : value_(val), height_(0), parent_(parent), left_(NULL), right_(NULL)
    {}

    void insert(int val);
    void balance();
    int update_heights();
    bool balance_factor();
private:
    BinarySearchTree * left_;
    BinarySearchTree * right_;
    BinarySearchTree * parent_;
    int value_;
    int height_;
};

#endif
