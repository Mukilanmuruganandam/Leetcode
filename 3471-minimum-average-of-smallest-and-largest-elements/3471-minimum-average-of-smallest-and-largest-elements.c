double minimumAverage(int* a, int n) {
    int i,j,c;
    double avg;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    double min=(double)(a[0]+a[n-1])/2.0;
    for(i=0;i<n/2;i++)
    {
        avg=(double)(a[i]+a[n-i-1])/2.0;
        if(min>avg)
        {
            min=avg;
        }
    }
return min;    
}