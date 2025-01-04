// A B C D E F
// A B C D E 
// A B C D
// A B C
// A B
// A

void pattern15(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}