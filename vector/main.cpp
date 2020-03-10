#include "vec.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    vec v;
    for(int i = 0 ; i < 10 ; i++){
        v.push_back(i * 10);
        v.printAll();
        if(i % 3 == 1){
            v.pop_back();
        }
        v.printAll();
    }

    return 0;
}
