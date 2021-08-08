int Solution::solve(string s) 
{
    int n = s.length();
    stack<char> st;
    for(int i =0; i<n; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                {
                    return 0;
                }
            }
            if(s[i] == ')' && st.top()== '(')
            {
                st.pop();
            }
            else if(s[i] == '}' && st.top()== '{')
            {
                st.pop();
            }
            else if(s[i] == ']' && st.top()== '[')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
    }
    if(!st.empty())
    {
        return 0;
    }
    return 1;
}
