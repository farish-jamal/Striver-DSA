//    A
//   ABA
//  ABCBA
// ABCDCBA

#include<iostream>
using namespace std;

int main(){

    
    for(int i = 1; i <= 4; i++){

        for(int j = 1; j <= 4 - i; j++){

            cout << " ";

        }

        for(char ch = 'A'; ch <= 'A' + i - 1; ch++){

            cout << ch;

        }

        for(char ch = 'A' + i - 1; ch > 'A'; ch--){

            char cha = ch;

            cout << --cha;

        }

        cout << "\n";

    }

    return 0;
}