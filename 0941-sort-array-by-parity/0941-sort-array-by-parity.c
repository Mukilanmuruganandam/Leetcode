int* sortArrayByParity(int* a, int n, int* returnSize) {
    int* ans=(int*)malloc(n * sizeof(int));
    int i=0,j=n-1,k;
    for(k=0;k<n;k++) 
    {
        if(a[k]%2==0)
        {
            ans[i]=a[k];
            i++;
        }
        else
        {
            ans[j]=a[k];
            j--;
        }
    }
    *returnSize=n;
    return ans;
}
