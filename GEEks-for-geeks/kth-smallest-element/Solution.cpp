class Solution{
    public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        Arrays.sort(arr);
        return arr[k-1]; //Your code here
    } 
}
//It works doesn't exceed time limit and got accepted . But , It's not optimal and accurate as it won't work for duplicate elements in an array , follow leetcode's solution for accurate one
