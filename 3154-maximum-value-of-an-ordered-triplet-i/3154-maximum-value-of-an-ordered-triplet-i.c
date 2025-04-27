long long maximumTripletValue(int* a, int n) {
    long long max=0,i,j,k,v;
    for(i=0;i<n;i++) 
    {
        for(j=i+1;j<n;j++) 
        {
            for(k=j+1;k<n;k++) 
            {
                v=(long long)(a[i]-a[j])*a[k];
                if(v>max) 
                {
                    max=v;
                }
            }
        }
    }
    return max;
}
