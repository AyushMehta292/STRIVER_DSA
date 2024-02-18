// You are given an integer ’n’.
// Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
// The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.
void helper(long long n, vector<long long> &ans, int j){
    if(j>n) return;
    if(!ans.empty() && (ans[ans.size()-1]*j)>n) return;
    if(!ans.empty()) ans.push_back(ans[ans.size()-1]*j);
    else ans.push_back(1);
    helper(n, ans, j+1);
}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    helper(n, ans,1);
    return ans;
}