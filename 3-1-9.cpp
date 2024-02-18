vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> ans;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (i == 0 || ans[ans.size() - 1] != a[i]) {
                ans.emplace_back(a[i++]);
            } else {
                i++;
            }
        } else {
            if (j == 0 || ans[ans.size() - 1] != b[j]) {
                ans.emplace_back(b[j++]);
            } else {
                j++;
            }
        }
    }
    while (i < a.size()) {
        if (ans.empty() || ans[ans.size() - 1] != a[i]) {
            ans.emplace_back(a[i++]);
        } else {
            i++;
        }
    }
    while (j < b.size()) {
        if (ans.empty() || ans[ans.size() - 1] != b[j]) {
            ans.emplace_back(b[j++]);
        } else {
            j++;
        }
    }
    return ans;
}