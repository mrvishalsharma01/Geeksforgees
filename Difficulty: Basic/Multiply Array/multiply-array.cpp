// User function Template for C++

class Solution {
  public:
    int product(int arr[], int n) {
        int ans = 1;
        for(int i=0; i<n; i++){
            ans*=arr[i];
        }
        return ans;
    }
};