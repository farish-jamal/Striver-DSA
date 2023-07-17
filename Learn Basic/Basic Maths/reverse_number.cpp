#include<bits/stdc++.h>
using namespace std;

int main(){

    int number;
    cin >> number;

    int duplicate = number;
    int newNumber = 0;

    while(number != 0){

        int lastDigit = number%10;
        newNumber = newNumber * 10 + lastDigit;
        number = number/10;

    }

    cout << newNumber;

    return 0;
}