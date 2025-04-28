int maximumPrimeDifference(int* a, int n) {
    int i,j,p,p2,k;
    for (i=0;i<n;i++) 
    {
        p=1;
        if(a[i]<2) 
        {
            p=0;
        } 
        else 
        {
            for(j=2;j*j<=a[i];j++) 
            {
                if(a[i]%j==0) 
                {
                    p=0;
                    break;
                }
            }
        }
        if(p) 
        {
            for(j=n-1;j>=i;j--) 
            {
                p2=1;
                if(a[j]<2) 
                {
                    p2=0;
                }
                else 
                {
                    for(k=2;k*k<=a[j];k++) 
                    {
                        if(a[j]%k==0) 
                        {
                            p2=0;
                            break;
                        }
                    }
                }
                if(p2) 
                {
                    return j-i;
                }
            }
        }
    }
    return 0;
}
