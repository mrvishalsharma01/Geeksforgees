//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
     int kadaneMax(vector<int> &arr , int n ){
        int sum = arr[0];
        int maxSum = arr[0];
        
        for(int i = 1 ; i < n ; i++){
            sum = max(arr[i] , sum + arr[i]);
            maxSum = max(sum , maxSum);
        }
        
        return maxSum;
    }
    
    int kadaneMin(vector<int> &arr , int n ){
        int sum = arr[0];
        int minSum = arr[0];
        
        for(int i = 1 ; i < n ; i++){
            sum = min(arr[i] , sum + arr[i]);
            minSum = min(sum , minSum);
        }
        
        return minSum;
    }
    
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n = arr.size();
        
        int sum = std::accumulate(arr.begin(), arr.end(), 0);

        
        int maxSum = kadaneMax(arr , n);
        
        int minSum = kadaneMin(arr , n);
        
        int cirr_sum = sum - minSum;
        
        if(maxSum > 0){
            return max(maxSum , cirr_sum);
        }
        
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends