#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    // Approach 1 - O(n)
    int count  = 0;
    for(int i = 1; i<=n; i++){

        if(n%i == 0) count++;

    }
    if(count == 2) cout << "Prime Number";
    else cout << "Not Prime Number";

    // Approach 2 - o(sqrt(n))

    int count = 0;

    for(int i = 1; i<=sqrt(n); i++){

        if(n%i == 0){
            count++;
            if(n/i != i) count++;
        }

    }
    if(count == 2) cout << "Prime Number";
    else cout << "Not Prime Number";

    return 0;
}