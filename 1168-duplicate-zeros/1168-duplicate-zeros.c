void duplicateZeros(int* a, int n) {
    int c=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]== 0)
        {
            if(i+c<n)
            {
                a[i+c]=0;
            }
            c--;
        }
        
        if(i+c<n)
        {
            a[i+c]=a[i];
        }
    }
}