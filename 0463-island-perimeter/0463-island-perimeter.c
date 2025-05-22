int islandPerimeter(int** a, int n, int* n1) {
    int p=0,i,j;
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n1[i];j++) 
        {
            if(a[i][j]==1) 
            {
                if(i==0 || a[i-1][j]==0) 
                p++;
                if(i==n-1 || a[i+1][j]==0) 
                p++;
                if(j==0 || a[i][j-1]==0) 
                p++;
                if(j==n1[i]-1 || a[i][j+1]==0) 
                p++;
            }
        }
    }

    return p;
}
