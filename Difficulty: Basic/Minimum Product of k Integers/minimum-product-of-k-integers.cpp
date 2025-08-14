

class Solution {
  public:
    int minProduct(vector<int> &arr, int k) {
        // Complete the function
       priority_queue<int> pq;
      for (int i=0; i<arr.size(); i++){
          pq.push(arr[i]);
          if(pq.size()>k){
              pq.pop();
          }
      }
      long long int ans= 1;
      while(!pq.empty()){
          ans= ans* pq.top();
          pq.pop();
          ans= ans%1000000007;
      }
      return ans;
    }
};