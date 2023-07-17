#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(2);

    dq.emplace_back(4);

    dq.push_front(5);

    dq.emplace_front(7);

    dq.pop_back();

    dq.pop_front();

    dq.back();

    dq.front();

    // Rest of function are same as vectors

    return 0;
}