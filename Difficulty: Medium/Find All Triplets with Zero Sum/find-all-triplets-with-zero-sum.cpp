//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
         int n = arr.size();
        vector<vector<int>>result;
        unordered_map<int,vector<int>>mpp;
        mpp[arr[0]].push_back(0);
        
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
               int pair_sum = arr[i] + arr[j];
               int remaining = 0 - pair_sum;
               
               if(mpp.find(remaining) != mpp.end()){
                   vector<int>index = mpp[remaining];
                   for(int idx : index){
                       result.push_back({idx,i,j});
                   }
               }
            }
            mpp[arr[i]].push_back(i);
        }
        return result;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends