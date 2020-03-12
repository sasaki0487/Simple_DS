#include "vec.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    vec v;
    v.pop_back();
    for(int i = 1 ; i < 11 ; i++){
        v.push_back(i * 10);
        v.printAll();
        if(i % 3 == 1){
            v.pop_back();
        }
        v.printAll();
    }
    cout << v.get(0) << endl;
    cout << v.get(3) << endl;
    cout << v.find(0) << endl;
    cout << v.find(30) << endl;
    return 0;
}
