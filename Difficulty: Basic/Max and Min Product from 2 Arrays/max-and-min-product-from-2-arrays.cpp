class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n=arr1.size();
        int n2=arr2.size();
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        return (arr1[n-1]*arr2[0]);
    }
};