//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
         int left=0,right=arr.size()-1 ,left_sum=0, right_sum=0, middle_sum_left=0;
        for(int i=0;i<arr.size();i++)
            middle_sum_left+=arr[i];
        while(left<=right)
        {
            if(left_sum==right_sum && left_sum == middle_sum_left)
            {
                vector<int>res={left-1,right+1};
                return(res);
            }
            if(left_sum<=right_sum)
            {
                middle_sum_left-=arr[left];
                left_sum+=arr[left++];
            }
            else
            {
                middle_sum_left-=arr[right];
                right_sum+=arr[right--];
            }
        }
        vector<int> res={-1,-1};
        return(res);
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends