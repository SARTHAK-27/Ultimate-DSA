class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        unordered_map<char, int> m;
        for (auto i : p)
        {
            m[i]++; // frequency of each element
        }
        int k = p.length(); // window size
        int count = m.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (j < s.size())
        {
            if (m.find(s[j]) != m.end()) // possible letter getting found of anagram
            {
                m[s[j]]--;
                if (m[s[j]] == 0)
                {
                    count--;
                }
            }

            if ((j - i + 1) < k)
            {
                j++; // window size not reached
            }

            else if ((j - i + 1) == k)
            {
                if (count == 0)
                {
                    ans.push_back(i); // count occurence
                }
                if (m.find(s[i]) != m.end()) // sliding  the window
                {
                    m[s[i]]++;
                    if (m[s[i]] == 1)
                    {
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};