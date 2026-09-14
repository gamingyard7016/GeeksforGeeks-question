#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumof = 0;

    // code here
    for(int i =0; i<=n;i++){
        sumof += i; 
    }
    cout<<sumof<<endl;

    return 0;
}