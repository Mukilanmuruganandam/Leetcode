int maximumNumberOfStringPairs(char**a,int n){
    int i,c=0,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int l=0,f=1;
            while(a[i][l]!='\0')
            l++;
            for(k=0;k<l;k++)
            {
                if(a[i][k]!=a[j][l-1-k])
                {
                    f=0;
                    break;
                }
            }
            if(f)
            c++;
        }
    }
    return c;
}
