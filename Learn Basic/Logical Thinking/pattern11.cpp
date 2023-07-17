// 1
// 01
// 101
// 0101
// 10101

#include<iostream>
using namespace std;

// Time Complexity - O(N^2) or O(N^2/2 + N/2) --> N * (N+1)/2

int main(){

    int start = 1;

    for(int i = 0; i <= 5; i++){

        if(i % 2 == 0) start = 0;

        else start = 1;

        for(int j = 1; j <= i; j++){

            cout << start;

            start = 1 - start;

        }

        cout << "\n";
        
    }

    return 0;
}