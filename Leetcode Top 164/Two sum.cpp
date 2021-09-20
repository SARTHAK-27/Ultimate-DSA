class Solution
{
public:
    vector<int> twoSum(vector<int> &A, int B)
    {
        // int n = A.size();
        unordered_map<int, int> hash;
        vector<int> res;

        for (int i = 0; i < A.size(); i++)
        {
            int findnum = B - A[i];
            if (hash.find(findnum) != hash.end())
            {
                res.push_back(hash[findnum]);
                res.push_back(i);
                return res;
            }

            hash[A[i]] = i;
        }
        return res;
    }
};