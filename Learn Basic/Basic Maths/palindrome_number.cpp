#include<bits/stdc++.h>
using namespace std;

int main(){

    int number;
    cin >>  number;

    if(number < 0) {
        cout << "false";
        return 0;
    }

    int duplicate = number;

    int newNumber = 0;

    // O(log10(n))

    while (number != 0){

        int lastDigit = number%10;
        newNumber = newNumber*10 + lastDigit;
        number = number/10;
        
    }

    if(duplicate == newNumber){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}