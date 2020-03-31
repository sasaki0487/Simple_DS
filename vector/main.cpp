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
    v.reverse();
    v.printAll();
    v.swap(2);
    v.printAll();
    v.bsort();
    v.printAll();
    return 0;
}
