#ifndef LL_H
#define LL_H
class Node {
        int val;
        Node* next;

    public:
        Node(int n);
        void add(int n);
        void remove(int n);
        void printNode();
};

void printPrompt();
#endif
