#include "vec.h"
#include <bits/stdc++.h>

using namespace std;

Node::Node(int n){
    val = n;
    prev = NULL;
    next = NULL;
}

vec::vec(){
    len = 0;
    dummy = new Node(-1);
}

int vec::size(){
    return this->len;
}

int vec::push_back(int n){
    this -> len++;
    Node* ad = new Node(n);
    Node* tmp = dummy;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp -> next = ad;
    ad -> prev = tmp;
    return 1;
}

void vec::printAll(){
    Node* tmp = dummy->next;
    while(tmp->next != NULL){
        cout << tmp->val << " ";
        tmp = tmp -> next;
    }
    cout << endl;
}
