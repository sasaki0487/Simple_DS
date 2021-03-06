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

void Node::removeVal(int n){
    Node* dummy = this;
    bool f = false;
    while(dummy -> next != NULL){
        if(dummy -> next -> val == n){
            f = true;
            break;
        }
        dummy = dummy -> next;
    }
    if(f){
         dummy -> next = dummy -> next -> next;
    }
    else{
        cout << "Not Found!!\n";
    }
    printNode();
}

void Node::removePos(int n){
    Node* dummy = this;
    while(n > 1 && dummy -> next != NULL){
        n--;
        dummy = dummy -> next;
    }
    if(n == 1 && dummy -> next != NULL){
        dummy -> next = dummy -> next -> next;
    }
    else{
        cout << "Position not found!\n";
    }
    printNode();
}

void Node::printNode(){
    Node* dummy = this->next;
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

void Node::setNext(Node* nxt){
    this->next = nxt;
}


void printPrompt(){
    cout << "1: add node\t2: remove node(value)\n3: remove node(position)\t4: exit\n";
}
