// Example 1:
// Input: x = 123
// Output: 321

// Example 2:
// Input: x = -123
// Output: -321

int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = ans * 10 + digit;
        x = x / 10;
    }
    return ans;
}