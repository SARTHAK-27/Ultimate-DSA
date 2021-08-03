string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate(string &A, int start, vector<string> &ans, string &temp)
{
    if (start == A.length())
    {
        ans.push_back(temp);
        return;
    }

    char c = A[start] - '0';
    for (int i = 0; i < charmap[c].length(); i++)
    {
        temp.push_back(charmap[c][i]);
        generate(A, start + 1, ans, temp);
        temp.pop_back();
    }
    return;
}

vector<string> Solution::letterCombinations(string A)
{
    vector<string> ans;
    string temp = "";
    generate(A, 0, ans, temp);

    return ans;
}
