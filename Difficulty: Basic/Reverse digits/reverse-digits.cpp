class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int num = n;
        int digit;
        int reverse = 0;
        while(num != 0){
            digit = num%10;
            reverse = reverse*10 + digit;
            num = num/10;
        }
        return reverse;
    }
};