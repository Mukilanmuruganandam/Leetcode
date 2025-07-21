int minMoves(int t, int m) {
    int ans=0;
    while(t>1 && m--) 
    {
        ans+=1+t%2;
        t/=2;
    }
    return ans+t-1;
}