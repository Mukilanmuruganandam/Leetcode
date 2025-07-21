int countTriples(int n) {
    int c=0;
    int i,j;
    for(i=1;i<n;i++) 
    {
        for(j=i+1;j<=n;j++) 
        {
            double s=sqrt(i*i+j*j);
            if(s>n) 
                break;
            if(s==floor(s)) 
                c+=2;
        }
    }
    return c;
}