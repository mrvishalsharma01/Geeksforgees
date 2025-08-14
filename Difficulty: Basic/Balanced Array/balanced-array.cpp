class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
         int n = arr.size() / 2;
        
        int lsum = 0;
        int rsum = 0;
        
        for(int i = 0; i < n; i++) {
            lsum += arr[i];
            rsum += arr[n+i];
        }
        
        return abs(lsum - rsum);
    }
};
