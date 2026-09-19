int firstDigit(int n) {
    // code here
    string ans = to_string(n);
    return ans[0] - '0';
}