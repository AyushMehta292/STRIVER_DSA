//if arr is sorted
#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n = arr.size();

    if (n == 1) {
        return arr[0];
    }

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        } else if ((mid % 2 == 0 && arr[mid + 1] == arr[mid]) || (mid % 2 == 1 && arr[mid - 1] == arr[mid])) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
 
}

//else

class Solution {
public:
int singleNumber(vector<int>& arr) {
    int n = arr.size();

    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
};