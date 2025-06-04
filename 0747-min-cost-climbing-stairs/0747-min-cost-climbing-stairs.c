int minCostClimbingStairs(int* a,int n){
    int s=a[0],s2=a[1],i,m,c;
    for(i=2;i<n;i++)
    {
        if(s<s2)
        m=s;
        else 
        m=s2;
        c=a[i]+m;
        s=s2;
        s2=c;
    }
    if(s<s2)
    return s;
    else 
    return s2;
}
