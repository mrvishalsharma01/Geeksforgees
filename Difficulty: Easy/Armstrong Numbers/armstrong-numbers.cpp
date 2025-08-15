// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
       
         int num = n, rem, ans=0;
        while(num != 0){
            rem = num % 10;
            ans += rem*rem*rem;
            num /= 10;
        }
        return ans==n;
    }
};