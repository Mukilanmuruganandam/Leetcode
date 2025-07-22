int maxDivScore(int* a, int n, int* b, int n1){
    int m=0,r=0,i,j,d;
    for(i=0;i<n1;i++)
    {
        d=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%b[i]==0)
                d++;
        }
        if(m<d)
        {
            m=d;
            r=i;
        }
        else if(m==d)
        {
            if(b[r]>b[i])
                r=i;
        }
    }
    return b[r];
}