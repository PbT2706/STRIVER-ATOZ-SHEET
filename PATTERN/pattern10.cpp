// *
// **
// *** 
// ****
// *****
// ******  
// *****
// ****
// ***    
// **
// *
//n=6

void nStarTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}