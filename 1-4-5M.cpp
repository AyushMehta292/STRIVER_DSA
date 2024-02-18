bool checkArmstrong(int n){
	//Write your code here
	int len = to_string(n).length();
    int temp = n, sum = 0;
    while (temp != 0)
    {
        sum += pow(temp % 10, len);
        temp /= 10;
    }
    return (n == sum);
}