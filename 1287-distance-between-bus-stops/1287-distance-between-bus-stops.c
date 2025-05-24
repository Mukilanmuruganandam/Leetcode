int distanceBetweenBusStops(int* a, int n, int start, int d){
    int s=start,s1=start;
    int val=0,val1=0;
    while(s!=d) 
    {
        s--;
        if(s<0) 
        s+=n;
        val+=a[s];
    }
    while(s1!=d) 
    {
        val1+=a[s1];
        s1=(s1+1)%n;
    }
    if(val<val1) 
    return val;
    return val1;
}