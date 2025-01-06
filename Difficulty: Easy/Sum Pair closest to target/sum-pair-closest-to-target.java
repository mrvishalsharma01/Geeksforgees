//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

public class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            String line = br.readLine();
            String[] tokens = line.split(" ");

            ArrayList<Integer> array = new ArrayList<>();

            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;

            int target = Integer.parseInt(br.readLine());

            Solution ob = new Solution();
            List<Integer> res = ob.sumClosest(arr, target);
            if (res.isEmpty()) {
                System.out.print("[]");
            } else {
                for (Integer num : res) {
                    System.out.print(num + " ");
                }
            }
            System.out.println();
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public List<Integer> sumClosest(int[] arr, int target) {
        // code here
     if (arr.length < 2) {
            return new ArrayList<>();
        }

        // Sort the array
        Arrays.sort(arr);
        
        int left = 0;
        int right = arr.length - 1;
        int closestSum = Integer.MAX_VALUE;
        List<Integer> bestPair = new ArrayList<>();

        while (left < right) {
            int currentSum = arr[left] + arr[right];

            // Check if this sum is closer to the target
            if (Math.abs(currentSum - target) < Math.abs(closestSum - target)) {
                closestSum = currentSum;
                bestPair = Arrays.asList(arr[left], arr[right]);
            } else if (Math.abs(currentSum - target) == Math.abs(closestSum - target)) {
                // If the current sum is equally close, check for maximum absolute difference
                if (Math.abs(arr[left] - arr[right]) > Math.abs(bestPair.get(0) - bestPair.get(1))) {
                    bestPair = Arrays.asList(arr[left], arr[right]);
                }
            }

            // Move pointers based on the comparison of currentSum and target
            if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }

        return bestPair;
        
    }
}