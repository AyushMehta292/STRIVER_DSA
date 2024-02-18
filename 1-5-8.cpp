bool isP=true;
void helper(int n, string &nums, int j){
    if(j>=n/2) return;
    if(nums[j]!=nums[n-1-j]) {isP=false; return;}
    if(isP) helper(n, nums, j+1);
}
bool isPalindrome(string& str) {
    // Write your code here.
    helper(str.size(), str, 0);
    return isP;
}