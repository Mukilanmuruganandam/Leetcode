int countQuadruplets(int* a,int n) {
        int c=0,i,j,k,l;
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                for(k=j+1;k<n-1;k++)
                {
                    for(l=k+1;l<n;l++)
                    {
                        if((a[i]+a[j]+a[k])==a[l])
                            c++;
                    }
                }
           }
        }
    return c;
    
}