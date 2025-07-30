int totalHammingDistance(int* a,int n){
    int c=0,i,j,k,c1,v;
    for(i=0;i<32;i++)
    {
        c1=0;
        for(j=0;j<n;j++)
        {
            v=a[j];
            for(k=0;k<i;k++)
            v/=2;
            if(v%2==1)
            c1++;
        }
        c+=c1*(n-c1);
    }
    return c;
}
