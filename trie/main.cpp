#include "trie.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    Trie t;
    t.insert("asdasd");
    t.insert("asdasdf");
    cout << "===== True =====\n";
    cout << t.find("asd") << endl;
    cout << t.find("asdasd") << endl;
    cout << t.sfind("asdasd") << endl;
    cout << "===== False =====\n";
    cout << t.find("asdf") << endl;
    cout << t.find("asdasdd") << endl;
    cout << t.sfind("asd") << endl;

    return 0;
}
