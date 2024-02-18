// Brute

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                ans += j;
        }
    }
    return ans;
}


// Contribution of i in total sum

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans+=(n/i)*i;
    }
    return ans;
}


// Optimal

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int sum = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {

        int t1 = i * (n / i - i + 1);

        int t2 = (((n / i) * (n / i + 1)) / 2) - ((i * (i + 1)) / 2);

        sum += t1 + t2;
    }

    return sum;
}