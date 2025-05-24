bool containsPattern(int* arr, int arrSize, int m, int k) {
    int i,j,n,n1;
    n=arrSize-m*k;
    n1=m*(k-1);
    for(i=0;i<=n;i++) 
    {
        bool m1=true;
        for(j=0;j<n1;j++) 
        {
            if(arr[i+j]!=arr[i+j+m]) 
            {
                m1=false;
                break;
            }
        }
        if(m1) 
        return true;
    }
    return false;
}
