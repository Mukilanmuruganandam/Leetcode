int surfaceArea(int** a, int n, int* n1) {
    int s=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1[i];j++)
        {
            if(a[i][j]>0)
            {
                s+=2;
            } 
            else 
            {
                continue;
            }
            if (i == 0)
            {
                s+=a[i][j];
            } 
            else if(a[i][j]>a[i-1][j])
            {
                s+=(a[i][j]-a[i-1][j]);
            }
            if(i==n-1)
            {
                s+=a[i][j];
            } 
            else if(a[i][j]>a[i+1][j])
            {
                s+=(a[i][j]-a[i+1][j]);
            }
            if(j==0)
            {
                s+=a[i][j];
            } 
            else if(a[i][j]>a[i][j-1])
            {
                s+=(a[i][j]-a[i][j-1]);
            }
            if(j==n1[i]-1)
            {
                s+=a[i][j];
            }
            else if(a[i][j]>a[i][j+1])
            {
                s+=(a[i][j]-a[i][j+1]);
            }
        }
    }
    return s;
}