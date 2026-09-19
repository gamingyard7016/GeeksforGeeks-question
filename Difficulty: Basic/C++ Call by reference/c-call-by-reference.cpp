// Function to reverse the digits
int reverseNum(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

void reverseDigit(int &a, int &b) {
    // code here
    a = reverseNum(a);
    b = reverseNum(b);
}

// Function to swap the values
void swap(int &a, int &b) {
    // code here
    int temp = a;
    a = b;
    b = temp;
}
