// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include<iostream>
using namespace std;

int main(){


    
    for(int i = 1; i <= 5; i++){

        for(char ch = 'A'; ch <= 'A' + 5 - i; ch++){

            cout << ch << " "; 

        }

        cout << "\n";

    }

    return 0;
}