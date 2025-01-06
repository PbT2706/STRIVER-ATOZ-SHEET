// Input: a = 5 , b = 10
// Output: [10, 5]
// Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

// Input: a = 14 , b = 8
// Output: [56, 2]
// Explanation: LCM of 14 and 8 is 56, while their GCD is 2.

vector<int> lcmAndGcd(int a, int b)
{
    int num1 = a, num2 = b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    int gcd = a == 0 ? b : a;
    int lcm = (num1 * num2) / gcd;
    return {lcm, gcd};
}