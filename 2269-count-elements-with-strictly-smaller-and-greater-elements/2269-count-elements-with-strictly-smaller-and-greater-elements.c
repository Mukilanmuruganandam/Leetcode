int countElements(int* a,int n) {
    int i,c=0;
    int m1=a[0];
    int m2=a[0];
    for(i=0;i<n;i++) 
    {
        if(a[i]>m1) 
        {
            m1=a[i];
        }
        if(a[i]<m2) 
        {
            m2=a[i];
        }
    }
    for(i=0;i<n;i++) 
    {
        if(a[i]>m2 && a[i]<m1) 
        {
            c++;
        }
    }
    return c;
}