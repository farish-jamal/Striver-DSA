#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){


    // Approch 1 - O(n)
    for(int j = 1; j<=n; j++){
		if(n%j == 0){
			cout << j << endl;
		}
	}


   // Approch 2 - O(sqrt(n))
	for(int j = 1; j<=sqrt(n); j++){
		if(n%j == 0){
			cout << j << endl;
			if(j != n/j){
				cout << n/j << endl;
			}
		}
	}
}

int main(){

    int n;
    cin >> n;
    countDigits(n);
    return 0;
}