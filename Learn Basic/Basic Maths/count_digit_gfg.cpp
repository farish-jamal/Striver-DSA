#include<bits/stdc++.h>
using namespace std;


// Approch 1 - Time Complexity - O(log10(N))
int countDigits(int N){

    int count = 0;

    while(N != 0){

        count++;
        N = N/10;

    }
    
    return count;

}

// Approch 2 - Time Complexity - O(1)
int countDigits(int N){

    return (int)(log10(N) + 1);

}

// Approch 3 - Time Complexity - O(1)
int countDigits(int N){

    string str = to_string(N);
    return str.length();

}

int main(){

    int N;
    cin >> N;

    cout << countDigits(N);
}
