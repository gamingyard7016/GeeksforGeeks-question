#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // code here
    if(n<m)cout<<"less";
    else if(n>m)cout<<"greater";
    else cout<<"equal";
    return 0;
}