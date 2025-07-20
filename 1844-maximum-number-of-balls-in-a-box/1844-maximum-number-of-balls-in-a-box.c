int countBalls(int n, int n1){
    int a[100];
    int m=-1,i,j,s;
    for (i=n;i<=n1;i++) 
    {
        s=0;
        for(j=i;j>0;j/=10) 
        {
            s+=j%10;
        }
        ++a[s];
        if(m<a[s]) 
        m=a[s];        
    }
    return m;
}