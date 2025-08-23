class Solution {
  public:
   bool is_true(vector<int> &arr, int k, int mid) {   
        int ctr = 1;    // Students used
        int val = 0;    // Current student's pages
        
        for (int i = 0; i < arr.size(); i++) {
            if (val + arr[i] <= mid) {
                val += arr[i];      // Add book to current student
            } 
            else {
                ctr++;              // Need new student
                val = arr[i];       // Start with current book
            }
        }
        
        return ctr <= k;    // Can allocate with k or fewer students
    }
    
    // Find minimum possible maximum pages per student
    int findPages(vector<int> &arr, int k) {
        if (k > arr.size()) return -1;  // More students than books
        
        int l = *max_element(arr.begin(), arr.end());   // Min: largest book
        int h = accumulate(arr.begin(), arr.end(), 0);  // Max: all books to one
        
        // Binary search on answer
        while (h > l + 1) {
            int mid = l + (h - l) / 2;
            
            if (is_true(arr, k, mid)) {
                h = mid;    // Try smaller max
            }
            else {
                l = mid;    // Need larger max
            }
        }
        
        return is_true(arr, k, l) ? l : h;
    }
};