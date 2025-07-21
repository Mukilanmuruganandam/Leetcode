int countSymmetricIntegers(int l, int h) {
    int c = 0, i, j, k, m, n;
    for(i=11;i<=99;i+=11)
        if(i>=l && i<=h) 
            c++;
    for(i=1;i<10;i++)
        for(j=0;j<10;j++)
            for(k=0;k<10;k++) 
            {
                m=i+j-k;
                if(m>=0 && m<10) 
                {
                    n=i*1000+j*100+k*10+ m;
                    if(n>=l && n<=h) 
                        c++;
                }
            }
    return c;
}

