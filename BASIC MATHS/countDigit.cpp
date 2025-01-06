// Count Digits

// Input: n = 12
// Output: 2
// Explanation: 1, 2 when both divide 12 leaves remainder 0.
// Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

int evenlyDivides(int n)
{
    int num = n, cnt = 0;
    while (n > 0)
    {
        int dig = n % 10;
        if (dig != 0)
        {
            if (num % dig == 0)
                cnt++;
        }
        n /= 10;
    }
    return cnt;
}