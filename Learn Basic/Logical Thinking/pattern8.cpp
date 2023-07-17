// *********
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;

// Time Complexity - O(N^2)

int main(){

    
    for(int i = 5; i >= 0; i--){

        for(int j = 1; j <= 5 - i; j++){

            cout << " ";

        }

        for(int j = 1; j <= i; j++){

            cout << "*";

        }

        for(int j = 1; j < i; j++){

            cout << "*";

        }

        cout << "\n";

    }

    return 0;
}