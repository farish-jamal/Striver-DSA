// E 
// D E 
// C D E 
// B C D E 
// A B C D E 

#include<iostream>
using namespace std;

int main(){

    
    for(int i = 1; i <= 5; i++){

        char ch = 'E' - i + 1;

        for(int j = 1; j <= i; j++){

            cout << ch++ << " ";

        }


        cout << "\n";

    }

    return 0;
}