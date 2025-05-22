int removeDuplicates(int* a, int n){
    if(n<=2)
        return n;
    int s=1;       
    int c=2;     
    while(c<n) 
    {
 
        if(a[c]==a[s] && a[c]==a[s-1]) 
        {
            c++;
        }
        else 
        {
            s++;
            a[s]=a[c];
            c++;
        }
    }
    return s+1;
}