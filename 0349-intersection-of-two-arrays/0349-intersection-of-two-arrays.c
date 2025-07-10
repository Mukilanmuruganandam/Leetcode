/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* a,int n,int* a1,int n2,int* returnSize) {
    int *arr=malloc(4*n);
    int s=0,i,j,k,f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==a1[j])
            {
                f=0;
                for(k=0;k<s;k++)
                {
                    if(a1[j]==arr[k]) 
                    f = 1;
                }
                if(f==0)
                {
                    arr[s]=a1[j];
                    s++;
                }              
            }
        }
    }
    *returnSize=s;
    return arr;
}