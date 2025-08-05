// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int countZero=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0)
            countZero++;
        }
        return countZero;
    }
};