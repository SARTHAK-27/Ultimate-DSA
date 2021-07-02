int Solution::braces(string A)
{
    stack<char> st;
    int size = A.length();
    int i = 0;

    while (i < size)
    {
        char c = A[i];
        if (c == '(' || c == '+' || c == '-' || c == '*' || c == '/')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (st.top() == '(')
            {
                return 1;
            }
            else
            {
                while (!st.empty() && st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        ++i;
    }
    return 0;
}
