#include<bits/stdc++.h>
using namespace std;


// Printing Name Using Recursion - O(n)
void printName(int n, int i){

    if(i > n) return;

    cout << "Farish" << " ";

    printName(n, i+1);
    
}


// Printing 1 to N Using Recursion - O(n)
void printCount(int n, int i){

    if(i > n) return;

    cout << i << " ";

    printCount(n, i+1);
    
}


// Printing N to 1 Using Recursion - O(n)
void printRevCount(int n, int i){

    if(n < i) return;

    cout << n << " ";

    printRevCount(n-1, i);
    
}


// Prining 1 to N Using Backtracking Method - O(n)
void printBackCount(int n, int i){

    if(n < i) return;

    printBackCount(n-1, i);
    cout << n << " ";
    
}

// Printing N to 1 Using Backtracking Method - O(n)
void printBackRevCount(int n, int i){

    if(i > n) return;

    printBackRevCount(n, i+1);
    
    cout << i << " ";
}



int main(){
    int n, i;
    cin >> n >> i;

    printName(n, i);

    cout << endl;

    printCount(n, i);

    cout << endl;

    printRevCount(n, i);

    cout << endl;

    printBackCount(n, i);  

    cout << endl;

    printBackRevCount(n, i);  

    return 0;
}