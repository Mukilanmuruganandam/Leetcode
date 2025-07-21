int distributeCandies(int n, int l) {
    int c=0,i,j,k;
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=l;j++)
        {
            for(k=0;k<=l;k++)
            {
                if(i+j+k==n) 
                c++;
            }
        }
    }
    return c;  
}