vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
{
    // Your code here
    // return vector with correct order of element
    vector<int> Union;
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}