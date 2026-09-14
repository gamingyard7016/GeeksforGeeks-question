class Solution {
  public:
    void printPat(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }
            cout << "*";

            if (i != 1) {
                int middleSpaces = 4 * (i - 1) - 1;
                for (int j = 1; j <= middleSpaces; j++) {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }


        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }
            cout << "*";
            if (i != 1) {
                int middleSpaces = 4 * (i - 1) - 1;
                for (int j = 1; j <= middleSpaces; j++) {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }
    }
};

