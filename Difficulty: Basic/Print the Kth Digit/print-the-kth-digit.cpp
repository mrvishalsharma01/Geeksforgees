class Solution {
  public:
    int kthDigit(int A, int B, int k) {
        // code here
        long long power=pow(A,B);
        string s=to_string(power);
        return s[s.size()-k]-'0';
    }
};