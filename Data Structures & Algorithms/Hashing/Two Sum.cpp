vector<int> Solution::twoSum(const vector<int> &A, int B)
{
    int n = A.size();
    unordered_map<int, int> hash;
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        int find_num = B - A[i];
        if (hash.find(find_num) != hash.end())
        {
            res.push_back(hash[find_num] + 1);
            res.push_back(i + 1);
            return res;
        }
        if (hash.find(A[i]) == hash.end())
        {
            hash[A[i]] = i;
        }
    }
    return res;
}
