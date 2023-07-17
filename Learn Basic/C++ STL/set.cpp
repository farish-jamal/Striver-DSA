#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

    // Work On FIFO --> First In First Out

    q.push(1); // {1}

    q.push(2); // {1,2}

    q.emplace(4); // {1,2,4}

    q.back() += 5;

    cout << q.back(); // Print 9

    cout << q.front(); // Prints 1

    q.pop(); // {2,9}

    cout << q.front(); // Prints 2

    // Every operation in queue in happen in O(1)

    return 0;
}