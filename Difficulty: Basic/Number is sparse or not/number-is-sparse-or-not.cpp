class Solution {
  public:
    bool isSparse(int n) {
        // code here
        return (n & (n >> 1)) == 0 ? true : false;
    }
};