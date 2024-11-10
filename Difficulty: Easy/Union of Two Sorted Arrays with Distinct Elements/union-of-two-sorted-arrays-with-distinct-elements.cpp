//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
         vector<int> unionArr;
        int n1 = a.size(), n2 = b.size();
        
        // starting from the first element of both the arrays a and b
        // while loop continues until one of the array will completly traversed
        int i=0, j=0;
        while(i < n1 && j < n2) {
            if(a[i] == b[j]) {
                unionArr.push_back(a[i]);
                i++, j++;
            }
            else if(a[i] < b[j]) {
                unionArr.push_back(a[i]);
                i++;
            }
            else {
                unionArr.push_back(b[j]);
                j++;
            }
        }
        
        // if elements are still present in an array then push it to unionArr
        while(i<n1)
            unionArr.push_back(a[i++]);
        
        while(j < n2)
            unionArr.push_back(b[j++]);
            
        
        return unionArr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends