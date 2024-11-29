//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
     bool areAnagrams(string& s1, string& s2) {
        // first verify that string lengths are equal
        if(s1.size() != s2.size())
        {
            return false;
        }
        // integer array of 26 for counting letters appearance
        int chars[26] = {0};
        // iterate through the arrays
        for(int i=0; i<s1.size(); i++)
        {
            // s1 characters increase chars number
            chars[s1[i] - 'a']++;
            // s2 characters decrease chars number
            chars[s2[i] - 'a']--;
        }
        // if strings are angram, chars should contain only zeros
        for(int i=0; i<26; i++)
        {
            if(chars[i] != 0)
            {
                return false;
            }
        }
        // all zeros, return true
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends