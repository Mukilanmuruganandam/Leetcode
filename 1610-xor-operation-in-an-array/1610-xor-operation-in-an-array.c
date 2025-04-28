int xorOperation(int n, int s) {
    int ans=0,i;
    for(i=0;i<n;i++) 
    {
        ans=ans^(s+2*i);  
    }
    return ans; 
}