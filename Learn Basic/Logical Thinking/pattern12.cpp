//     *
//    ***
//   *****
//  *******
// *********
#include<iostream>
using namespace std;

int main(){

    
    for(int i = 1; i <= 4; i++){

        for(int j = 1; j <= i; j++){

            cout << j;

        }

        for(int j = 1; j <= 4 - i; j++){

            cout << " ";

        }

        for(int j = 1; j <= 4 - i; j++){

            cout << " ";

        }

        for(int j = i; j > 0; j--){

            cout << j;

        }

        cout << "\n";

    }

    return 0;
}