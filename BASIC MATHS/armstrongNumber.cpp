// Input:N = 153
// Output:True
// Explanation: 13+53+33 = 1 + 125 + 27 = 153

// Input:N = 371
// Output: True
// Explanation: 33+53+13 = 27 + 343 + 1 = 371

bool isArmstrong(int num)
{
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while (n > 0)
    {
        int ld = n % 10;
        sum += pow(ld, k);
        n = n / 10;
    }
    return sum == num ? true : false;
}