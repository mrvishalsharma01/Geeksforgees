class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
         int n = arr.size();
        
        int luckyTroopsNeeded = (n + 1) / 2;
        
        vector<int> costs;
        
        for(int i = 0; i < n; i++) {
            int cost = (k - arr[i] % k) % k;
            costs.push_back(cost);
        }
        
        sort(costs.begin(), costs.end());
        
        int totalSoldiers = 0;
        for(int i = 0; i < luckyTroopsNeeded; i++) {
            totalSoldiers += costs[i];
        }
        
        return totalSoldiers;
    }
};