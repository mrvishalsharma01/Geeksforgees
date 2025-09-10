class Solution {
  public:
    string largestSwap(string &s) {
        // code here
         int n = s.size();
        int lar = n-1;
        
        for(int i = n-1; i>=0; i--){
            if(s[i] > s[lar]){
                lar = i;
            }
        }
        
        for(int i =0; i<lar; i++){
            if(s[i] < s[lar]){
                swap(s[i], s[lar]);
                break;
            }
        }
        
        
        return s;
    }
};