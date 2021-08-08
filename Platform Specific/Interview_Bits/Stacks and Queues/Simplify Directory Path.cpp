string Solution::simplifyPath(string A)
{
    vector<string> st;
    string ans, temp;
    stringstream p(A);

    while (getline(p, temp, '/'))
    {
        if (temp == "" || temp == ".")
        {
            continue;
        }
        if (!st.empty() && temp == "..")
        {
            st.pop_back();
        }
        else if (temp != "..")
        {
            st.push_back(temp);
        }
    }
    for (auto s : st)
    {
        ans += "/" + s;
    }

    return st.empty() ? "/" : ans;
}
