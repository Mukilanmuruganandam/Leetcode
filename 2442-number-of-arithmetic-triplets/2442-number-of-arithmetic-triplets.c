int arithmeticTriplets(int* a,int n,int d) {
    int c=0,i,j,s2,s3;
    for(i=0;i<n;i++)
    {
        s2=0,s3=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
                s2=1;
            }
            if(a[j]-a[i]==2*d)
            {
                s3=1;
            }
            if(s2 && s3)
            {
                c++;
                break;
            }
        }
    }
    return c;
}