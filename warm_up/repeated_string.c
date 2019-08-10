long count(char *s, long n)
{
    long c = 0;

    for (long i = 0; i < n; i++)
        if ('a' == s[i])
            c++;
    return c;
}

long repeatedString(char* s, long n)
{
    int len = strlen(s);
    int parts = n % len;
    long units = n / len;

    return units * count(s, len) + count(s, parts);
}
