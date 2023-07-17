// 1
// 22
// 333
// 4444
// 55555

// Time Complexity - O(N^2) or O(N^2/2 + N/2) --> N * (N+1)/2

#include<iostream>
using namespace std;

int main(){
    
    for(int i = 1; i <= 5; i++){

        for(int j = 1; j <= i; j++){

            cout << i ;

        }

        cout << "\n";

    }

    return 0;
}