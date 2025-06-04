uint32_t reverseBits(uint32_t n){
    uint32_t s=0;
    int i,r;
    for(i=0;i<32;i++)
    {
        r=(n%2);
        s=r+s*2;
        n=n/2;
    }
    return s;
}
