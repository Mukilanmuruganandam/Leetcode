int lastStoneWeight(int* a, int n) {
    if(n<2)
    return a[0];
    int i,j,c;
    while(true)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            if(a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
        int x=a[0],y=a[1];
        a[0]=a[1]=0;  
        if(x!=y)                            
        a[0]=x-y;
        if(y==0) 
        return a[0];           
    }
}
