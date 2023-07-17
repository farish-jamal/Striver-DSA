#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;

    // Work On LIFO --> Last In First Out

    st.push(1); // {1}

    st.push(2); // {2,1}

    st.push(3); // {3,2,1}

    st.push(4); // {4,3,2,1}

    st.push(5); // {5,4,3,2,1}

    cout << st.top();

    st.pop(); // {4,3,2,1}

    cout << st.top(); //4

    cout << st.empty();

    // Swapping Stacks --> 

    stack<int> st1, st2;

    st1.swap(st2);

    return 0;
}