class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int maxValue = -1;
        int size = citations.size();
        
        for(int i =0; i<size; i++){
            maxValue = max(maxValue, citations[i]);
        }
        
        vector<int> comp(maxValue + 1, 0);
        
        for(int i =0; i<size; i++){
            comp[citations[i]]++;
        }
        
        int ans = 0;
        int roll = 0;
        for(int i =maxValue; i>-1; i--){
            int val = roll+comp[i];
            if(val>i || val==i) return i;
            roll = val;
        }
    }
};