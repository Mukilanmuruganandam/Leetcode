int smallestRepunitDivByK(int k){
    if(k%2==0||k%5==0)
    return -1;
    int r=0,len=0;
    while(1)
    {
        r=(r*10+1)%k;
        len++;
        if(r==0)
        return len;
    }
}
