/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* a, int n, int* returnSize) {
    int *arr=malloc(4*n);
    int s=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                arr[s]=a[i];
                s++;
            }
        }
    }
    *returnSize=s;
    return arr;
}