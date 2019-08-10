#define NMAX 100

int sockMerchant(int n, int ar_count, int* ar)
{
    int no_pairs = 0;
    int pairs_count[100] = {0};

    for (int i = 0; i < n; i++) {
        int color = ar[i];
        printf("%d\n", color);
        pairs_count[color - 1]++;
    }
    for (int i = 0; i < NMAX; i++) {
        printf("%d ", pairs_count[i]);
        no_pairs += pairs_count[i] / 2;
    }
    return no_pairs;
}
