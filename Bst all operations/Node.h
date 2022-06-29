#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int val);
};

Node::Node(int val) {
    data = val;
    left = right = nullptr;
}


#endif