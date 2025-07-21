int smallestIndex(int* a, int n) {
    int i,s,c,r;
    for(i=0;i<n;i++)
    {
        c=a[i];
        s=0;
        while(c!=0)
        {
            r=c%10;
            s=s+r;
            c=c/10;
        }
        if(s==i)
        {
            return i;
        }
    }
    return -1;  
}