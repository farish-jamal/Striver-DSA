#include<bits/stdc++.h>
using namespace std;

int main(){

    // Arrays are constant in size, Vectors are dynamic so it's size can be changed.

    vector<int> v;

    v.push_back(1); // pushing 1 in to vector from back

    v.push_back(1);

    v.push_back(1);

    v.push_back(1);

    v.emplace_back(2); // pushing 2 in to vector from back, it is faster than push_back

    vector<pair<int, int>> w;

    w.push_back({1,2});

    w.emplace_back(3,4);

    vector<int> x(5, 100); // User defined size and with instances

    vector<int> y(5); // It will decleare the vector of size 5 with garbage value on all its instances

    vector<int> z(x); //Copying x vector in y vector

    // Iterator -->

    vector<int>::iterator it = v.begin();

    cout << *(it) << " ";

    it++;

    cout << *(it) << " ";

    vector<int>::iterator end = v.end();

    cout << v.back() << " ";

    // Printing the entire vector using iterator only -->

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    // Delete --> 

    v.erase(v.begin() + 1);

    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,12,23,35} --> After deletion {10,23,35}

    // Insert -->

    v.insert(v.begin(), 300);

    v.insert(v.begin() + 1, 2, 10); // First Pointer, Number of digit to be inserted, The number to be inserted

    // v.insert(pointer, Number of digit, The actual Number);

    // Copying one vector in another vector -->

    vector<int> copy(2,50);

    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50, --, --, --, old vector}

    cout << v.size(); // Size of vector

    v.pop_back(); // Remove the last element from the vector

    // v1 --> {10,20}
    // v2 --> {30,40}
    // v1.swap(v2); v1 -> {30,40}, v2 -> {10, 20}

    v.clear(); // Erase everything

    cout << v.empty();

    return 0;

}