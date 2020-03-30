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
    head = new Node(-1);
    last = new Node(-1);
    head -> next = last;
    head -> prev = NULL;
    last -> next = NULL;
    last -> prev = head;
}

int vec::size(){
    return this->len;
}

int vec::push_back(int n){
    this -> len++;
    Node* ad = new Node(n);
    Node* tmp = last -> prev;
    tmp -> next = ad;
    ad -> prev = tmp;
    ad -> next = last;
    last -> prev = ad;
    return 1;
}

void vec::printAll(){
    Node* tmp = head;
    while(tmp->next != last){
        tmp = tmp -> next;
        cout << tmp->val << " ";
    }
    cout << endl;
}

int vec::pop_back(){
    if(len == 0){
        cout << "Nothing to pop." << endl;
        return -1;
    }
    Node* tmp = last -> prev -> prev;
    Node* rm = tmp -> next;
    tmp -> next = last;
    last -> prev = tmp;
    int ret = rm -> val;
    delete rm;
    len--;
    return ret;
}

int vec::get(int n){
    if(n >= this-> size()){
        cout << "OOB!\n";
        return INT_MIN;
    }
    Node* tmp = head->next;
    for(int i = 0 ; i < n ; i++){
        tmp  = tmp -> next;
    }
    return tmp->val;
}

int vec::find(int n){
    Node* tmp = head->next;
    int i = 0;
    while(tmp != last){
        if(tmp -> val == n){
            return i;
        }
        tmp = tmp -> next;
        i++;
    }
    return -1;
}

Node* vec::begin(){
    return this->head->next;
}

Node* vec::end(){
    return this->last;
}
