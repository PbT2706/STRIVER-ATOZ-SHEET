// Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
// Output: 3
// Explanation: First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last.
// Input: arr = [1, 4, 3, 2, 6, 7]
// Output: 2
// Explanation: First we jump from the 1st to 2nd element and then jump to the last element.

int minJumps(vector<int> &arr)
{
    int n = arr.size();
    if (arr[0] == 0)
    {
        return -1;
    }
    int i = n - 1;
    int count = 0;
    while (i > 0)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] + j >= i)
            {
                i = j;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return -1;
        }
        count++;
    }
    return count;
}