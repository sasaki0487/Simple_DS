#include "vec.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    vec v;
    for(int i = 0 ; i < 10 ; i++){
        v.push_back(i * 10);
    }
    v.printAll();

    return 0;
}
