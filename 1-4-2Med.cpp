//  7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
int reverse(int x)
{
    int y = 0;
    while (x)
    {
        int pop = x % 10;
        x /= 10;
        if (y > INT_MAX / 10 || (y == INT_MAX / 10 && pop > 7))         //imp
            return 0;
        if (y < INT_MIN / 10 || (y == INT_MIN / 10 && pop < -8))        //imp
            return 0;
        y = y * 10 + pop;
    }
    return y;
}
// There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.
long reverseBits(long x) {
    // Write your code here.
    long y=0;
    for(int i=0; i<32; i++){
        y<<=1;
        int last=x&1;
        y|=last;
        x>>=1;
    }
    return y;    
}