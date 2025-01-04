// F
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F

void pattern18(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}