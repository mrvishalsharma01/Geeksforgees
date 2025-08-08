
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
          for(int i = 0, n = arr.size(); i < n/2; i++) {
            if(arr[i] != arr[n - i - 1]) return false;
        }
        return true;
    }
};
