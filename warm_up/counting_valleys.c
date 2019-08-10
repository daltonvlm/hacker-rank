int countingValleys(int n, char* s)
{
    int level = 0;
    int no_valleys = 0;

    for (int i = 0; i < n; i++)
        if ('D' == s[i]) {
            if (0 == level)
                no_valleys++;
            level--;
        } else
            level++;
    return no_valleys;
}
