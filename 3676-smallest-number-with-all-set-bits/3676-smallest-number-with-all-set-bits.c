int smallestNumber(int n) {
    int pow=1;
    if(n==1) 
    return 1;
    while(pow<=n)
    {
        pow=pow*2;
    }
    return pow-1;
}