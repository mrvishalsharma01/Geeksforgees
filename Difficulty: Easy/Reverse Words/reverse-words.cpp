//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    void reverseSubstring(int start, int end, string &s) {
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    string reverseWords(string s) {
        int n = s.length();
        int start = 0;

        // Reverse each word in the string.
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == '.') {
                reverseSubstring(start, i - 1, s);
                start = i + 1;  // Move start to the beginning of the next word.
            }
        }

        // Reverse the entire string to get the words in the correct order.
        reverseSubstring(0, n - 1, s);

        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends