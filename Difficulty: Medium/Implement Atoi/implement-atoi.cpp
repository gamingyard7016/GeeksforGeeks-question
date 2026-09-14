class Solution {
  public:
    int myAtoi(string &s) {
        // code here
        int i =0;
        int n =s.size();
        
        while(i<n && s[i] == ' '){
            i++;
        }
        
        int sign = 1;
        if(i<n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }
        //num chek
        long long num = 0;
        while(i<n && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i] -'0');
            
            if(num*sign >2147483647) return 2147483647;
            if(num*sign < -2147483648) return -2147483648;
            i++;
        } 
        return num*sign;
    }
};
