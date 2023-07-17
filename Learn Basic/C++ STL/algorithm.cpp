#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){

    if(p1.second < p2.second) return true;

    if (p1.second > p2.second) return false;
    
    // If They are same -->

    if(p1.first > p2.first) return true;

    return false;

}

int main(){

    int arr[] = {1,3,1,9,8,8};

    int n = 5;

    sort(arr, arr+n); // Sorting with STL

    sort(arr + 2, arr + 4);

    vector<int> a = {3,10,3,1,9,8};

    sort(a.begin(), a.end());

    // sort(a.begin(), a.end(), greater<int>);

    pair<int, int> v[] = {{1,2}, {2,1}, {4,1}};

    // Sort it according to second element
    // If second element is same, then sort it according to first element but in decsending order

    sort(v, v+3, comp);

    // finding set bits in integers --> 
    int num = 7;

    int cnt = __builtin_popcount(num);

    long long num = 165786578687;
    
    // For Long Long  int -->
    
    int cnt = __builtin_popcountll(num);

    return 0;
}