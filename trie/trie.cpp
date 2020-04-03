#include "trie.h"

using namespace std;

Trie::Trie(char c){
    t[c] = new Trie();
    end = false;
}

Trie::Trie(){
    end = false;
}

void Trie::insert(string s){
    Trie* tmp = this;
    for(int i = 0 ; i < s.size() ; i++){
        if(tmp -> t.find(s[i]) == tmp -> t.end()){
            tmp -> t[s[i]] = new Trie();
        }
        tmp = tmp -> t[s[i]];
    }
    tmp -> end = true;
}

bool Trie::find(string s){
    cout << "Find " << s << ": ";
    Trie* tmp = this;
    for(int i = 0 ; i < s.size() ; i++){
        if(tmp -> t.find(s[i]) == tmp -> t.end()){
            return false;
        }
        else{
            tmp = tmp -> t[s[i]];
        }
    }
    return true;
}

bool Trie::sfind(string s){
    cout << "Find " << s << ": ";
    Trie* tmp = this;
    for(int i = 0 ; i < s.size() ; i++){
        if(tmp -> t.find(s[i]) == tmp -> t.end()){
            return false;
        }
        else{
            tmp = tmp -> t[s[i]];
        }
    }
    return tmp -> is_end() == true ? true : false;
}

bool Trie::is_end(){
    return this->end;
}
