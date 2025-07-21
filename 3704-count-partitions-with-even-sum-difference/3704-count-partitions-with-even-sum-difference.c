int countPartitions(int* a, int n) {
    int s=0,i,s1,s2,c;
    for(i=0;i<n;i++) 
    {
        s+=a[i]; 
    }
    s1=0;
    c=0;
    for(i=0;i<n-1;i++) 
    { 
        s1+=a[i]; 
        s2=s-s1; 
        if((s1%2)==(s2%2)) 
        {
            c++; 
        }
    }
    return c; 
}
