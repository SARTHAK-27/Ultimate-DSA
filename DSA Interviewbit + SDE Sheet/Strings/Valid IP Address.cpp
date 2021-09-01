void validIP(vector<string> &result, string str, int index, int count, string ip)
{
    if (str.size() == index && count == 4)
    {
        ip.pop_back();
        result.push_back(ip);
        return;
    }

    if (str.size() < index + 1)
    {
        return;
    }
    ip = ip + str.substr(index, 1) + '.';
    validIP(result, str, index + 1, count + 1, ip);
    ip.erase(ip.end() - 2, ip.end());

    if (str.size() < index + 2 || str[index] == '0')
    {
        return;
    }
    ip = ip + str.substr(index, 2) + '.';
    validIP(result, str, index + 2, count + 1, ip);
    ip.erase(ip.end() - 3, ip.end());

    if (str.size() < index + 3 || stoi(str.substr(index, 3)) > 255)
    {
        return;
    }
    ip = ip + str.substr(index, 3) + '.';
    validIP(result, str, index + 3, count + 1, ip);
    ip.erase(ip.end() - 4, ip.end());
}

vector<string> Solution::restoreIpAddresses(string str)
{
    vector<string> result;
    validIP(result, str, 0, 0, "");
    return result;
}
