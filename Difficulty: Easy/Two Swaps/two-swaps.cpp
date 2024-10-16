//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
            int i = 2 ;
        int st = 0 ;
        int ed = arr.size() ;
        bool flag = false ;
        while (i--) {
        for (int j = 0 ; j < arr.size() - 1 ; j++) {
            if(arr[j] > arr[j+1] ) {
                flag = true ;
                break ;
            }
        }
        if(flag)
            swap(arr[st],arr[ed]) ;
            st++ ;
            ed-- ;
            flag = false ;
        }
        for (int j = 0 ; j < arr.size() - 1 ; j++) {
            if(arr[j] > arr[j+1] ) {
                return false ;
            }
        }
        return true ;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends