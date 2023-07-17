//     *
//    ***
//   *****
//  *******
// *********
#include<iostream>
using namespace std;

// Time Complexity - O(N^2)

int main(){

    
    for(int i = 1; i <= 5; i++){

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