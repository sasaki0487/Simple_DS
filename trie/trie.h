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
    void insert(string); //Insert string into trie;
    bool find(string); //Check if target string is in trie
    bool sfind(string); //Check if target string is in trie and is same as the inserted string.
    bool is_end();
};
#endif
