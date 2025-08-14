class Solution {
  public:
    bool check(string s) {
        // code here.
         int n = s.size();
        if(n == 1)  return true;
        
        for(int i=0; i<n-1; i++){
            if(s[i] != s[i+1]){
                return false;
            }
        }
        return true;
    }
};