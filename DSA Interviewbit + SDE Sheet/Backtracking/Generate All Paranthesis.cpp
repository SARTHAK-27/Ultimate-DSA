void solve(int open, int close, string &op, vector<string> &v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }

    if (open != 0)
    {
        string op1 = op;
        op1.push_back('(');
        solve(open - 1, close, op1, v);
    }

    if (close > open)
    {
        string op2 = op;
        op2.push_back(')');
        solve(open, close - 1, op2, v);
    }

    return;
}

vector<string> Solution::generateParenthesis(int A)
{
    vector<string> ans;
    int open = A;
    int close = A;
    string op = "";
    solve(open, close, op, ans);
    return ans;
}
