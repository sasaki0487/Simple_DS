#ifndef TRIE_H
#define TRIE_H

#include <bits/stdc++.h>
using namespace std;

class Trie{
    unordered_map<char,Trie*> t;
    bool end;
public:
    Trie();
    Trie(char c);
    void insert(string);
    bool find(string);
    bool sfind(string);
    bool is_end();
};
#endif
