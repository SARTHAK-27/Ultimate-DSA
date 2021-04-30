class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> ss;
    MinStack()
    {
    }

    void push(int val)
    {
        s.push(val);
        if (ss.size() == 0 || ss.top() >= val)
        {
            ss.push(val);
        }
        return;
    }

    void pop()
    {
        if (s.size() == 0)
        {
            return;
        }
        int ans = s.top();
        s.pop();
        if (ss.top() == ans)
        {
            ss.pop();
        }
        return;
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        if (ss.size() == 0)
        {
            return -1;
        }
        return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// O(1) Space

class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> s;
    int minele;
    MinStack()
    {
    }

    void push(int val)
    {
        if (s.size() == 0)
        {
            s.push(val);
            minele = val;
        }
        else
        {
            if (val >= minele)
            {
                s.push(val);
            }
            else if (val <= minele)
            {
                s.push(2 * val - minele);
                minele = val;
            }
        }
    }

    void pop()
    {
        if (s.size() == 0)
            return;
        else
        {
            if (s.top() >= minele)
            {
                s.pop();
            }
            else if (s.top() < minele)
            {
                minele = 2 * minele - s.top();
                s.pop();
            }
        }
    }

    int top()
    {
        if (s.size() == 0)
            return -1;
        else
        {
            if (s.top() >= minele)
                return s.top();
            else if (s.top() < minele)
            {
                return minele;
            }
        }
        return 0;
    }

    int getMin()
    {
        if (s.size() == 0)
            return -1;
        return minele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */