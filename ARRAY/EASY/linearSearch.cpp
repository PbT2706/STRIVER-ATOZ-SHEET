bool searchInSorted(vector<int> &arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
            return true;
    }
    return false;
}