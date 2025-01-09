//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int sum=0,first=-1;
        int n=arr.size(),i=0,j=0;
        
        first=1;
        while(j<n){
            sum+=arr[j];
            
            if(sum<target){
                j++;
            } else if(sum==target){
                int last=j+1;
                return {first,last};
            } else{
                while(sum>target){
                    sum-=arr[i];
                    i++;
                }
                
                first=i+1;
                if(sum==target) {
                    int last=j+1;
                    return {first,last};
                }
                j++;
            }
        }
        
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends