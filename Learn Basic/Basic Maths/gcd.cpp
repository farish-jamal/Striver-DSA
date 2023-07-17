#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    
    // Approch 1 - O(min(a,b))
    int gcd = 1;
    for(int i = 1; i<= min(a,b); i++){
        if((a%i == 0) && (b%i == 0)){
            gcd = i;
        }
    }
    cout << gcd;

    // Approch 2 - O(min(a,b))

    int gcd = 1;
    for(int i = min(a,b); i >= 0; i--){
        if((a%i == 0) && (b%i == 0)){
            gcd = i;
            break;
        }
    }
    cout << gcd;


    // Approch 3 - O(min(a,b))
    while(a > 0 && b > 0){

        if(a>b) a = a%b;
        else b = b%a;
    }

    if(a == 0) cout << b;
    else cout << a;

    return 0;

    
}