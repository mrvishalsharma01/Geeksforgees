//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
     void rotateby90(vector<vector<int>>& mat) {

// first find transpose of matrix
        for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat[i].size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }

//after that reverse the element in a vertical manner of matrix 
        for(int i=0;i<mat.size()/2;i++){
            for(int j=0;j<mat[i].size();j++){
                swap(mat[i][j],mat[mat.size()-1-i][j]);
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << matrix[i][j] << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends