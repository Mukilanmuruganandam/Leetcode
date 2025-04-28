/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* a, int n, int* returnSize)
{
   int *result = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] < a[i]) {
                c++;
            }
        }
        result[i] = c;
    }
    *returnSize = n;
    return result;
}
