int countValidSelections(int* a,int n){
    int c=0,d=0,i;
    for(i=1;i<n;i++)
    d+=a[i];
    if(a[0]==0)
    {
        if(d==0)
        c+=2;
        else if(d==1||d==-1)
        c+=1;
    }
    for(i=1;i<n;i++)
    {
        d-=a[i]+a[i-1];
        if(a[i]==0)
        {
            if(d==0)
            c+=2;
            else if(d==1||d==-1)
            c+=1;
        }
    }
    return c;
}
