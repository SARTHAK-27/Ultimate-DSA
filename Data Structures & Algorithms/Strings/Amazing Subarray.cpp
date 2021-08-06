bool isvowel(char c)
{
    bool res = false;
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        res = true;
        break;
    default:
        res = false;
        break;
    }
    return res;
}

int Solution::solve(string A)
{
    int count = 0;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        if (isvowel(A[i]))
        {
            count = count + (n - i);
        }
    }
    return count % 10003;
}
