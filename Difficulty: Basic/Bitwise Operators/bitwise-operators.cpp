#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // code here
    int d = a^a;
    int e = c^b;
    int f = a&b;
    int g =~e;

    cout << d << " " << e << " " << f << " " << g << endl;
    return 0;
}