int specialArray(int* a,int n) {
    int i,j,c;
    for (i=0;i<=n;i++) 
    {
        c=0;
        for(j=0;j<n;j++) 
        {
            if(a[j]>=i) 
            {
                c++;
            }
        }
        if(c==i) 
        {
            return i;
        }
    }
    return -1;
}