int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int start=0, end=0;
    int length=0, ans=-10;

    while(end<a.size()){
        if(k==0){
            ans=max(length,ans);
        } 
        else if (k<0) {k+=a[start]; length--; start++; continue;}
        k-=a[end];
        length++;
        end++;
    }
    if(k==0){
            ans=max(length,ans);
        }
    return ans;
}