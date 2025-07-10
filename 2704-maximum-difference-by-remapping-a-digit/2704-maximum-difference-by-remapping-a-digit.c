int minMaxDifference(int n) {
    int a[9];
    int idx=0,max,i,m1,m2;
    while(n>0)
    {
        a[idx]=n%10;
        n/=10;
        idx++;
    }
    
    max=0;
    for(i=idx-1;i>=0;i--)
    {
        if(a[i]!=9)
        {
            max=a[i];
            break;
        }
    }

    m1=0,m2=0;
    for(i=idx-1;i>=0;i--)
    {
        if(max==a[idx-1])
        {
            if(a[i]==a[idx-1])
            {
                m1=m1*10+9;
                m2=m2*10+0;
            }
            else
            {
                m1=m1*10+a[i];
                m2=m2*10+a[i];
            }
        }
        else
        {
            if(a[i]==a[idx-1])
            {
                m2=m2*10+0;
            }
            else
            {
                m2=m2*10+a[i];
            }
            if(a[i]==max)
            {
                m1=m1*10+9;
            }
            else
            {
                m1=m1*10+a[i];
            }
        }
    }
    return m1-m2;
}