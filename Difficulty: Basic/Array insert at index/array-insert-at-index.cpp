class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        arr.push_back(0); // make space
       int n=arr.size();
       
        for( int i = n-1 ; i>index; i-- ) 
          arr[i] = arr[i-1];
          arr[index]=val;
    }
};
