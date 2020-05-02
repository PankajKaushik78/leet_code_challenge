int numJewelsInStones(string J, string S)
{
    int upper[27] = {};
    int lower[27] = {};

    for (int i = 0; i < J.length(); i++)
    {
        if (J[i] < 97)
        {
            int idx = J[i] - 'A' + 1;
            upper[idx]++;
        }
        else
        {
            int idx = J[i] - 'a' + 1;
            lower[idx]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] < 97)
        {
            int idx = S[i] - 'A' + 1;
            if (upper[idx] > 0)
                ans++;
        }
        else
        {
            int idx = S[i] - 'a' + 1;
            if (lower[idx] > 0)
                ans++;
        }
    }

    return ans;
}