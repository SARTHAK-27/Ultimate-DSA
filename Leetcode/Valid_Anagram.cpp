class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int ns = s.size(), nt = t.size();
        if (ns != nt)
        {
            return false;
        }
        unordered_map<char, int> m;
        for (int i = 0; i < ns; i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }

        for (auto c : s)
        {
            if (m[c] > 0)
            {
                return false;
            }
        }
        return true;
    }
};