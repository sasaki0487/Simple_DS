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
    Node* head;
    Node* last;
public:
    vec();
    int push_back(int);
    void swap(int);
    void bsort();
    int size();
    void printAll();
    void reverse();
    int pop_back();
    int get(int);
    int find(int);
    Node* begin();
    Node* end();
};

#endif
