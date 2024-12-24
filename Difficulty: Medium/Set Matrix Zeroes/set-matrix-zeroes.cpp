//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
      void setMatrixZeroes(vector<vector<int> > &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int col0 =1;
        for(int i =0;i<n;i++){
            for(int j= 0;j<m;j++)
            {
                if(arr[i][j]==0)
                {
                     arr[i][0] = 0;
                       if (j!=0)
                          arr[0][j] = 0;
                          
                          else col0 =0;
                      
                     
                }
                
            }
        }
        for(int i = 1;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][j]!=0){
                if( arr[i][0] ==0 || arr[0][j] ==0){
                    arr[i][j] = 0;
                }
            }}
        }
        if(arr[0][0] == 0){
            for(int j=0;j<m;j++){
            arr[0][j]=0;
        }}
        if(col0 == 0){
            for(int i=0;i<n;i++){
                arr[i][0] = 0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends