// Given an integer x, return true if x is apalindrome, and false otherwise.    -2^31 <= x <= 2^31 - 1

int reverse(int x)
{
    int y = 0;
    while (x)
    {
        int pop = x % 10;
        x /= 10;
        if (y > INT_MAX / 10 || (y == INT_MAX / 10 && pop > 7))
            return 0;
        if (y < INT_MIN / 10 || (y == INT_MIN / 10 && pop < -8))
            return 0;
        y = y * 10 + pop;
    }
    return y;
}