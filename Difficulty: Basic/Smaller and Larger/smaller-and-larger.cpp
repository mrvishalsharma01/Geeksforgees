// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int x) {
        // code here
        vector<int> result;                //empty vector
        int n=arr.size();
        int cnt1=0;
        int cnt2=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=x){
                cnt1++;
            }
            if(arr[i]>=x){
                cnt2++;
            }
        }
        result.push_back(cnt1);        
        result.push_back(cnt2);
        return result;
    }
};