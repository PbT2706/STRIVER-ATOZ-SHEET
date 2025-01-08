int largest(vector<int> &arr)
{
    int maxi = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}