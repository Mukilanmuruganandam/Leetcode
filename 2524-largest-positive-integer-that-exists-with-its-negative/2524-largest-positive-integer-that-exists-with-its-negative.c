int findMaxK(int* a,int n) {
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
    j=n-1,i=0;
    while(i<j) 
    {
        int s=-1*a[j];
        if(a[i]==s)
            return a[j];
        else if(a[i]<s)
            i++;
        else
            j--;
    }
    return -1; 
}