class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &T)
    {
        stack<int> st;
        vector<int> ngr(T.size());
        st.push(T.size() - 1);

        for (int i = T.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && T[st.top()] <= T[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                ngr[i] = 0;
            }
            else
            {
                ngr[i] = st.top() - i;
            }
            st.push(i);
        }
        return ngr;
    }
};