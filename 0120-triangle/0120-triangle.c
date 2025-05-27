int minimumTotal(int** a,int n,int* n1){
    int i,j,s1,s2;
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<n1[i];j++)
        {
            s1=a[i+1][j];
            s2=a[i+1][j+1];
            if(s1<s2)
            {
                a[i][j]+=s1;
            }
            else
            {
                a[i][j]+=s2;
            }
        }
    }
    return a[0][0];
}
