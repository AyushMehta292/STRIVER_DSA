void helper(int n, vector<int> &nums, int j){
    if(j>=n/2) return;
    swap(nums[j], nums[n-1-j]);
    helper(n, nums, j+1);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    // if(j>=n/2) return nums;
    // swap(nums[j], nums[n-1-j]);
    // return nums= reverseArray(n, nums, j+1);
    helper(n, nums, 0);
    return nums;
}
