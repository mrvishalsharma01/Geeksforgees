// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
         for(int i = 0; s[i]; i++) {
            if(s[i] =='a'||s[i]=='e'||s[i] =='i'||s[i]=='o'||s[i]=='u'){
                s.erase(s.begin() + i--);
            }
        }
        return s;
    }
};