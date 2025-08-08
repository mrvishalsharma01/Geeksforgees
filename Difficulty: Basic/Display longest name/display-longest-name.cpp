
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string maximum="";
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i].size()>maximum.size()){
                maximum=arr[i];
            }
        }
        return maximum;
    }
};
