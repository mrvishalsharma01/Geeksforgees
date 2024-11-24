//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
         int maxi = arr[0], mini = arr[0], sum = arr[0];
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i] < 0){
                swap(mini, maxi);
            }else if(arr[i] == 0){
                mini = maxi = 1;
            }
            
            mini = mini * arr[i];
            mini = min(mini, arr[i]);
            
            maxi = maxi * arr[i];
            maxi = max(arr[i], maxi);
            
            sum = max(sum, maxi);
        }
        
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends