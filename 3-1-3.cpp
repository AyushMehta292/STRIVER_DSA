//
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]) return 0;
    }
    return 1;
}

//
class Solution {
public:
    bool check(vector<int>& a) {
        int n=a.size();
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]) {
                while(i<n){
                    if(i+1<n && a[i]>a[i+1]) return 0;
                    if(a[i]> a[0]) return 0;
                    i++;
                }
            }
        }
        return 1;
    }
};