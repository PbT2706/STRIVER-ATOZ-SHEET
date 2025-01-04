// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F

void pattern14(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}