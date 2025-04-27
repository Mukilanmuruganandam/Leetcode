int minMovesToSeat(int* a,int n, int* a1, int n1) {
    int ans=0,c;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i]<=a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
            if(a1[i]<=a1[j])
            {
                c=a1[i];
                a1[i]=a1[j];
                a1[j]=c;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        ans+=abs(a1[i]-a[i]);
    }
return ans;
}