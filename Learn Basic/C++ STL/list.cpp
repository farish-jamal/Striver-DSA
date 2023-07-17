#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> ls;

    ls.push_back(2);

    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front(7);

    // Rest of function are same as vectors

    return 0;
}