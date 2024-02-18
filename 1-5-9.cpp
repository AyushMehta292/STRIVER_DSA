void helper(int n,vector<int> &ans, int j){
    if(ans.size()==n) return;
    ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]) ;
    helper(n, ans, j+1);
}
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans; 
    ans.push_back(0);  if(n==1) return ans;
    ans.push_back(1);  if(n==2) return ans;
    helper(n, ans, 2);
    return ans;
}