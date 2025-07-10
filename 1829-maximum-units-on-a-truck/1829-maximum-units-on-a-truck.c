int maximumUnits(int**a,int n,int*n1,int n3){
    int i,j,c,c2,s=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][1]<a[j][1])
            {
                c=a[i][0];
                c2=a[i][1];
                a[i][0]=a[j][0];
                a[i][1]=a[j][1];
                a[j][0]=c;
                a[j][1]=c2;
            }
        }
    }
    for(i=0;i<n && n3>0;i++)
    {
        int bcnt=a[i][0];
        int s1=a[i][1];
        if(n3>=bcnt)
        {
            s+=bcnt*s1;
            n3-=bcnt;
        }
        else
        {
            s+=n3*s1;
            break;
        }
    }
    return s;
}
