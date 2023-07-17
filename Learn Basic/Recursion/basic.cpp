#include<bits/stdc++.h>
using namespace std;

void count(int cnt){
    if(cnt == 4) return; // Base case
    cout << cnt << " ";
    cnt++;
    count(cnt);
}

int main(){
    int cnt = 0;
    count(cnt);
    return 0;
}