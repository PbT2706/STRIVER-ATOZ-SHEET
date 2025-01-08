bool check(vector<int> &nums)
{
    int gt = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            gt++;
    }
    if (nums[nums.size() - 1] > nums[0])
        gt++;
    return (gt == 1 || gt == 0);
}