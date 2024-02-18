//
void selectionSort(vector<int>&arr) {
    // Write your code here.
    for(int i=0; i<arr.size(); i++){
        int minIndex=i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

//recursion

void selectionSortRecursive(std::vector<int> &arr, int startIdx=0) {
    if (startIdx == arr.size() - 1) return;
    int minIndex = startIdx;
    for (int i = startIdx + 1; i < arr.size(); ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    swap(arr[startIdx], arr[minIndex]);
    selectionSortRecursive(arr, startIdx + 1);
}
void selectionSort(vector<int>&arr) {
    // Write your code here.
    selectionSortRecursive(arr);
}