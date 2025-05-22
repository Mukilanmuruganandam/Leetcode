int findPoisonedDuration(int* a, int n, int d) {
    int t=0,i;
    for(i=0;i<n-1;i++) 
    {
        if(a[i]+d-1<a[i+1]) 
        {
            t=t+d;
        }
        else 
        {
            t=t+(a[i+1]-a[i]);
        }
    }

    return t+d;
}