//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
   private:
    int findMax(vector<int> &arr, int val) {
        int maxi = INT_MIN;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == val)
                continue;
            else
                maxi = max(maxi, arr[i]);
        }
        
        return maxi;
    }
  public:
    int pairsum(vector<int> &arr) {
        // code here
        // this "findMax()" function helps us to get the maximum value except the maximum value we passed,
       // for the first time we pass default maximum value is -1 then for the second time we have to pass the maximum value we found first. 
        int maxi_1 = findMax(arr, -1);
        int maxi_2 = findMax(arr, maxi_1);
        
        return maxi_1+maxi_2;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends