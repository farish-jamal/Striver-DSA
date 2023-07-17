#include<bits/stdc++.h>
using namespace std;

int main(){

    // Maximum Heap -->

    priority_queue<int> pq;

    pq.push(5); // {5}

    pq.push(2); // {5,2}

    pq.push(8); // {8,5,2}

    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // Prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // Prints 8

    // Minimum Heap -->

    priority_queue<int, vector<int>, greater<int>> mq;

    mq.push(5); // {5}

    mq.push(2); // {2,5}

    mq.push(8); // {2,5,8}

    mq.emplace(10); // {2,5,8,10}

    cout << mq.top(); // Prints 2

    //Push --> O(logn), top --> O(1), pop --> O(logn)

    return 0;
}