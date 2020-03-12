#ifndef VEC_H
#define VEC_H

class Node {
public:
    int val;
    Node* prev;
    Node* next;
//public:
    Node(int);
};

class vec {
    int len;
    Node* dummy;
public:
    vec();
    int push_back(int);
    int size();
    void printAll();
    int pop_back();
    int get(int);
    int find(int);
};

#endif
