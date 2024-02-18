//
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int start = 0, end = 0;

    while (end < n) {
        if (a[start] == 0 && a[end] != 0) {
            std::swap(a[start], a[end]);
            start++;
        }

        if (a[start] != 0) {
            start++;
        }

        end++;
    }

    return a;
}
