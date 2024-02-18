//
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
    }
    return arr;
}

//
void Reverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    if (k == 0)
        return;
    Reverse(arr, 0, n - k - 1);
    Reverse(arr, n - k, n - 1);
    Reverse(arr, 0, n - 1);
}
