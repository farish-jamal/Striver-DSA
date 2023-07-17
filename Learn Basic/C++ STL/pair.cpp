#include<bits/stdc++.h>
using namespace std;

int main(){

    // lies in utility library :
    pair<int, int> p = {1,3};

    cout << p.first << " " << p.second << "\n";

    // Nested Pairs
    pair<int, pair<int, int>> q = {1,{2,3}};

    cout << q.first << " " << q.second.first << " " << q.second.second << "\n";

    // Array of pairs
    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6}};

    cout << arr[0].first;

    return 0;
}