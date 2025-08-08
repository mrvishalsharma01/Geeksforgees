class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
          vector <int> dublicate;
        sort(arr.begin(), arr.end());
        for(int i = 1; i < arr.size(); i++){
           if(arr[i] == arr[i-1]){
                dublicate.push_back(arr[i]);
           }
        }
        return dublicate;
    }
};