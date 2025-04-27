int maximumDifference(int* a, int n) {
    int ans=-1,i;
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if (a[i]<min)
        min=a[i];
        else 
        {
            if (ans<a[i]-min && min!=a[i])
                ans=a[i]-min;
        }
    }
    return ans;
}