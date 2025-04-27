int findFinalValue(int* a,int n,int k) {
    int i=0;
    while(i<n) 
    {
        if(a[i]==k) 
        {
            k=2*k;
            i=0; 
        }
        else 
            i++;
    }
    return k;
}