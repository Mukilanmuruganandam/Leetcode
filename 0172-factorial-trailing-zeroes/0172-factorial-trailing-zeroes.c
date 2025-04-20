int trailingZeroes(int n) {
    int s=0;
    int i=5;
    while(i<=n){
        s=s+n/i;
        i*=5;
    }
    return s;
    
    
}