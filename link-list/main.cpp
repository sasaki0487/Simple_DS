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
            cout << "Enter the num to append to the link list\n> ";
            cin >> n;
            N->add(n);
        }
        else if(n == 2){
            cout << "Enter the num to delete from the link list\n> ";
            cin >> n;
            N->removeVal(n);
        }
        else if(n == 3){
            cout << "Enter the pos to delete from the link list\n> ";
            cin >> n;
            N->removePos(n);
        }
        else if(n == 4){
            break;
        }
        else{
            cout << "Wrong input. Please retry.\n";
        }
    }



    return 0;
}
