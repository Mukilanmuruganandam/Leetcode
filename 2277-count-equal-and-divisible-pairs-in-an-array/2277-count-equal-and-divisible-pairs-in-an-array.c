int countPairs(int* a, int n, int k) {
    int c=0,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                if(i*j%k==0)
                c++;
            }
        }
    }
return c;  
}