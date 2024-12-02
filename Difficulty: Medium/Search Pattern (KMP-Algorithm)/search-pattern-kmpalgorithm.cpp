//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
      vector<int> lpsArray( string &pattern ){
        int i = 0, n = pattern.size(); vector<int> lps(n+1, 0);
        for ( int i = 1; i<n; i++ ){
            int j = lps[i-1];
            while ( j > 0 && pattern[i] != pattern[j] ) j = lps[j-1];
            if ( pattern[i] == pattern[j] ) j++;
            lps[i] = j;
        } return lps;
    }
    vector<int> search(string& pat, string& txt) {
        int i = 0, j = 0, n = txt.size(), m = pat.size();
        vector<int> res, lps = lpsArray(pat);
        while ( i < n ){
            if ( txt[i] == pat[j] ) i++, j++;
            if ( j == m ) res.push_back(i-j), j = lps[j-1];
            else if ( i < n && txt[i] != pat[j] ){
                if ( j ) j = lps[j-1];
                else i++;
            }
        } return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends