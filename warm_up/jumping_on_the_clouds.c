int jumpingOnClouds(int c_count, int* c)
{
    int safe = 0;
    int jumps = 0;

    for (int i = 0; i < c_count; i++)
        if (c[i]) {
            jumps += safe / 2 + 1;
            safe = 0;
        } else
            safe++;
    return jumps + safe / 2;
}
