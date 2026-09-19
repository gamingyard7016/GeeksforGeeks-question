#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool a;
    if(s == "true") a = true;
    else a = false;

    // Printing numeric representation of boolean
    cout << a;

    return 0;
}
