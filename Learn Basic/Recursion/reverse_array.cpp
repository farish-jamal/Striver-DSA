#include<bits/stdc++.h>
using namespace std;


// Reversing an array with recursion -
void reverse(int *arr , int start, int end){

    if(start > end) return;

    swap(arr[start], arr[end]);

    reverse(arr, start+1, end-1);

}

// Reversing an array with normal for loop - 

void reverse(int *arr, int start, int end){

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin >>  arr[i];
    }

    int start = 0;
    int end = n-1;

    reverse(arr, start, end);

    for(int i = 0; i<n; i++){
        cout << arr[i];
    }

    return 0;
}