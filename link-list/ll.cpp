#include "ll.h"
#include <bits/stdc++.h>

using namespace std;

Node::Node(int n){
    val  = n;
    next = NULL;
}

void Node::add(int n){
    Node* tmp = new Node(n);
    Node* dummy = this;
    while(dummy -> next != NULL){
        dummy = dummy -> next;
    }
    dummy -> next = tmp;
    printNode();
}

void Node::remove(int n){

}

void Node::printNode(){
    Node* dummy = this;
    while(1){
        cout << dummy -> val;
        dummy = dummy -> next;
        if(dummy != NULL){
            cout << " -> ";
        }
        else{
            cout << endl;
            break;
        }
    }
}
void printPrompt(){
    cout << "1: add node\t2: remove node\t3: exit\n";
}
