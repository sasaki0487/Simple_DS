#include "ll.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    Node* N = new Node(0);
    while(1){
        printPrompt();
        cout << "> ";
        cin >> n;
        if(n == 1){
            cout << "Enter the num to add to the link list\n> ";
            cin >> n;
            N->add(n);
        }
        else if(n == 2){

        }
        else if(n == 3){
            break;
        }
        else{
            cout << "Wrong input. Please retry.\n";
        }
    }



    return 0;
}
