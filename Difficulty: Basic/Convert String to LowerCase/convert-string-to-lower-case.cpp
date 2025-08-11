// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(auto &ch : s){
            ch = tolower(ch);
        }
        return s;
    }
};