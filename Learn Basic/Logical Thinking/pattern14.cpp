// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 

// Time Complexity - O(N^2)

#include<iostream>
using namespace std;

int main(){


    
    for(int i = 1; i <= 5; i++){

        for(char ch = 'A'; ch < 'A' + i; ch++){

            cout << ch << " "; 

        }

        cout << "\n";

    }

    return 0;
}