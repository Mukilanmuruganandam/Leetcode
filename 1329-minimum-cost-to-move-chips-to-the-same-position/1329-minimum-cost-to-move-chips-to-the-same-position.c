int minCostToMoveChips(int* p, int n) {
    int s=0,c=0,i,ans;
    for(i=0;i<n;i++)
    {
        if(p[i]%2==0)
        c++;
        else
        s++;
    }
    if(s<c)
    return s;
    else 
    return c; 
} 
    