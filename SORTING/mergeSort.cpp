void merge(vector<int> &arr, int l, int mid, int h)
{
    vector<int> temp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= h)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}