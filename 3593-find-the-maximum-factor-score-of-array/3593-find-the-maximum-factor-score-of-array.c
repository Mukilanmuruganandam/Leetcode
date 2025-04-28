long long maxScore(int* a, int n) {
    int i,j,b;
    long long m=0,g,l,a1,b1,a2,c,g1,s;

    for(i=-1;i<n;i++) 
    {
        g=0;
        l=1;
        
        for(j=0;j<n;j++) 
        {
            if(j==i) 
            continue;
            if(g==0)
                g=a[j];
            else 
            {
                a1=g,b=a[j];
                while(b!=0)
                {
                    c=a1%b;
                    a1=b;
                    b=c;
                }
                g=a1;
            }
            a1=l,b=a[j];
            a2=a1,b1=b;
            while(b!=0) 
            {
                c=a1%b;
                a1=b;
                b=c;
            }
            g1=a1;
            l=(a2/g1)*b1;
        }

        if(g!=0 && l!=0) 
        {
            s=g*l;
            if (s>m)
                m=s;
        }
    }

    return m;
}
