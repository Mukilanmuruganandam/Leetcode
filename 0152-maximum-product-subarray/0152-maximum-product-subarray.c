int maxProduct(int*a,int n){
    int i,ans=a[0],big=a[0],m=a[0],s,c;
    for(i=1;i<n;i++)
    {
        s=a[i];
        if(s<0)
        {
            c=big;
            big=m;
            m=c;
        }
        if(s>big*s)
            big=s;
        else
            big=big*s;
        if(s<m*s)
            m=s;
        else
            m=m*s;
        if(ans<big)
            ans=big;
    }
    return ans;
}
