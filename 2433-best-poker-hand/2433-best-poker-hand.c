char*bestHand(int*a,int n,char*a1,int n1){
    int ans[100],i,s=1;
    for(i=0;i<n;i++)
    {
        ans[a[i]]++;
        if(a1[i]!=a1[0])
            s=0;
    }
    if(s)
        return "Flush";
    for(i=1;i<=13;i++)
        if(ans[i]>=3)
            return "Three of a Kind";
    for(i=1;i<=13;i++)
        if(ans[i]==2)
            return"Pair";
    return "High Card";
}
