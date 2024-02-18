// Given an array 'v' of 'n' numbers.



// Your task is to find and return the highest and lowest frequency elements.


// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.

vector<int> getFrequencies(vector<int>& nums) {
    // Write Your Code Here
    unordered_map<int,int> m;
    for(int i=0; i<nums.size() ; i++){
        m[nums[i]]++;
    }
    int mini=INT_MAX, maxi=INT_MIN, left=INT_MAX, right=INT_MAX;
    for (const auto &pair : m){
        // cout<<"first:"<<pair.first<<" second:"<<pair.second<<"  ";
        mini= min( pair.second ,mini);
        maxi= max( pair.second ,maxi);
    }
    for (const auto &pair : m){
        if( pair.second ==maxi && pair.first <left) left=min(pair.first,left);
        if( pair.second ==mini && pair.first <right) right=min(pair.first,right);
    }
    return {left,right};
}

// The frequency of an element is the number of times it occurs in an array.

// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

// Return the maximum possible frequency of an element after performing at most k operations.
// Example 1:

// Input: nums = [1,2,4], k = 5
// Output: 3
// Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
// 4 has a frequency of 3.
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = 0;
        int res = 1;
        long sum=0;
        while(end<nums.size()){
            sum+=nums[end];
            end++;
            if(k+sum<((long)nums[end-1]*(end-start))){
                sum-=nums[start++];
            }
            res=max(res,end-start);
        } 
        return res;
        
    }