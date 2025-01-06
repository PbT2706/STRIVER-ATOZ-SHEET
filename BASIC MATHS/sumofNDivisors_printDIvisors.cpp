// Sum 1 to n Divisors
// Input: n = 5
// Output: 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// So,  F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6 = 21

// int sumOfDivisors(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 sum += j;
//         }
//     }
//     return sum;
// }