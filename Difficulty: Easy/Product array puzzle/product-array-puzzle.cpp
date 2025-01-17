//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
         int product = 1;
        int cnt = 0;
        vector<int>ans;
        for(auto i: arr){
            if(i!=0){
                product*=i;
            }
            else{
                cnt++;
            }
        }
        for(auto i: arr){
            if(i==0){
                cnt--;
                if(cnt==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
                cnt++;
            }
            else{
                if(cnt>0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(product/i);
                }
            }
        }
        
        return ans;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends