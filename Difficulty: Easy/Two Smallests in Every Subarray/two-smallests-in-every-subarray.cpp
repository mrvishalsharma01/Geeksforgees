//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
         int maxi=0;
        int adjsum=0;
        
        if(arr.size()==1)
        return -1;
        
        for(int i=0;i<arr.size()-1;i++)
        {
            adjsum=arr[i]+arr[i+1];
            maxi=max(maxi,adjsum);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends