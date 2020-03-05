#ifndef LL_H
#define LL_H
class Node {   
    public:
    int val;
    Node* next;
//public:
    Node(int);
    void add(int);
    void removeVal(int);
    void removePos(int);
    void printNode();
    void setNext(Node *);
};

void printPrompt();
#endif
