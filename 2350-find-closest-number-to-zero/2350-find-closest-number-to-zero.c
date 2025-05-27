int findClosestNumber(int*a,int n){
    int ans=a[0],i,c,ac,c1;
    for(i=0;i<n;i++)
    {
        c=a[i];
        if(c<0)
        ac=abs(c);
        else 
        ac=c;
        if(ans<0)
        c1=abs(ans);
        else 
        c1=ans;
        if(c==0)
        return 0;
        if(ac<c1)
        ans=c;
        else if(ac==c1 && c>ans)
        ans=c;
    }
    return ans;
}
