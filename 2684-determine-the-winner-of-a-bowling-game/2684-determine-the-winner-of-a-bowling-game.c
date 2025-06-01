int isWinner(int* a,int n,int* a1,int n2){
    int p1=0;
    int p2=0;
    int i;
    int p1x=0;
    int p2x=0;
    for(i=0;i<n;i++)
    {
        if(p1x)
        {
            p1x--;
            p1+=(a[i]*2);
        }
        else
            p1+=a[i];
        if(p2x)
        {
            p2x--;
            p2+=(a1[i]*2);
        }
        else
            p2+=a1[i];

        if(a[i]==10)
            p1x=2;
        if(a1[i]==10)
            p2x=2;
    }
    if(p1==p2)
    return 0;
    else if(p1>p2)
    return 1;
    else
    return 2;
}