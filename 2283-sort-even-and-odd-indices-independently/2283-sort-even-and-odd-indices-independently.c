/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortEvenOdd(int* a, int n, int* returnSize) {
    int i,j,c;
    for(i=1;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(i=0;i<n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }

    *returnSize=n;
    int* res=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    res[i]=a[i];
    return res;
}
