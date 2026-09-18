class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int q = n / m;              // C++ me negative division truncate towards zero hoti hai
        int n1 = m * q;

        // agar n aur m same sign ke hain (product positive), to n2 upar wala multiple hai
        // warna n2 neeche wala multiple hai
        int n2 = (n * m > 0) ? m * (q + 1) : m * (q - 1);

        // strict '<' use karo — tie hone par ye n2 ko select karega,
        // jo negative case me bade abs value wale number ko sahi se pick karta hai
        if (abs(n - n1) < abs(n - n2))
            return n1;
        return n2;
    }
};