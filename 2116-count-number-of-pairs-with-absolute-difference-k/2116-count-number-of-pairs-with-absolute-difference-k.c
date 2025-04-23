int countKDifference(int*a,int n,int k){
    int count=0,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==k)
            count++;
        }
    }
    return count;
}

