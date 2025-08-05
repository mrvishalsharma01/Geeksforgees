class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
          string cleaned;

        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        int left = 0, right = cleaned.length() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }

        return true;
    }
};