int search(int* a, int n, int t) {
    int s,s1,m;
    s=0;
    s1=n-1;
    
    while(s<=s1) 
    {
        m=s+(s1-s)/2;
        if(a[m]==t)
            return m;
        
        if(a[s]<=a[m]) 
        {
            if(t>a[m] || t<a[s]) 
            {
                s=m+1;
            } 
            else 
            {
                s1=m-1;
            }
        } 
        else 
        {
            if(t<a[m] || t>a[s1]) {
                s1=m-1;
            } 
            else 
            {
                s = m + 1;
            }
        }
    }
    
    return -1;
}
