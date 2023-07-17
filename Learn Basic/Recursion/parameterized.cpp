#include<bits/stdc++.h>
using namespace std;


// Printing sum of 1 to N - O(n) - Parameterized Type -
void sum(int n, int ans){

    if(n < 1){
        cout << ans;
        return;
    }

    sum(n-1, ans + n);

}

// Printing sum of 1 to N - O(n) - Functional Type -
int func(int n){
    
    if(n == 0) return 0;
    return n + func(n-1);
}

// Printing factorial of N - O(n) - Parameterized Type -
void facto(int n, int ans){

    if(n == 1){
        cout << ans;
        return;
    }

    facto(n-1, ans*n);
}

// Printing factorial of N - O(n) - Functional Type -

int fact(int n){
    
    if(n == 1) return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;

    int ans = 0;

    sum(n, ans);

    cout << func(n);

    cout << fact(n);

    facto(n, 1);

    return 0;
}