int deleteGreatestValue(int**a,int m,int*n){
    int ans=0,i,j,k,max,max1,v;
    for(i=0;i<*n;i++)
    {
        max=0;
        for(j=0;j<m;j++)
        {
            max1=0;
            for(k=1;k<*n-i;k++)
            {
                if(a[j][k]>a[j][max1])
                {
                    max1=k;
                }
            }
            v=a[j][max1];
            a[j][max1]=a[j][*n-i-1];
            if(v>max)max=v;
        }
        ans+=max;
    }
    return ans;
}
