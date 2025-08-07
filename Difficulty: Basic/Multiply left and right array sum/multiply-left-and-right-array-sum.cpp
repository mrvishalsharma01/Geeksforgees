//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
         int i=0,j=arr.size()-1;
        int lsum=0,rsum=0;
        while(i<j)
        {
            lsum +=arr[i];
            rsum +=arr[j];
            i++;
            j--;
        }

           return (i!=j)?lsum*rsum:lsum*(rsum+arr[j]);
    }
};