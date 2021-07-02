// O(1) Space

int mine;
stack<int> s;

MinStack::MinStack()
{
    s = stack<int>();
}

void MinStack::push(int x)
{
    if (s.size() == 0)
    {
        s.push(x);
        mine = x;
    }
    else
    {
        if (x >= mine)
        {
            s.push(x);
        }
        else if (x <= mine)
        {
            s.push(2 * x - mine);
            mine = x;
        }
    }
}

void MinStack::pop()
{
    if (s.size() != 0)
    {
        if (s.top() >= mine)
        {
            s.pop();
        }
        else if (s.top() < mine)
        {
            mine = 2 * mine - s.top();
            s.pop();
        }
    }
}

int MinStack::top()
{
    if (s.size() == 0)
    {
        return -1;
    }
    else
    {
        if (s.top() >= mine)
        {
            return s.top();
        }
        else if (s.top() < mine)
        {
            return mine;
        }
    }
}

int MinStack::getMin()
{
    if (s.size() == 0)
    {
        return -1;
    }
    else
    {
        return mine;
    }
}

// O(n) Space

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
