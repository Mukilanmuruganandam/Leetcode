int minDominoRotations(int* a, int n, int* a1, int n1) {
    int c1=a[0],c2=a1[0],i;
    int ct1=0,cb1=0,s1=0;
    int ct2=0,cb2 =0,s2=0;
    for(i=0;i<n;i++) 
    {
        if(a[i]==c1) 
        ct1++;
        if(a1[i]==c1) 
        cb1++;
        if(a[i]==c1 && a1[i]==c1) 
        s1++;
        if(a[i]==c2) 
        ct2++;
        if(a1[i]==c2) 
        cb2++;
        if(a[i]==c2 && a1[i]==c2) 
        s2++;
    }
   if(ct1+cb1-s1==n) 
   {
    int r1;
    if(n-ct1<n-cb1)
        r1=n-ct1;
    else
        r1=n-cb1;
    return r1;
}

    if(ct2+cb2-s2==n) 
    {
    int r2;
    if(n-ct2<n-cb2)
        r2=n-ct2;
    else
        r2=n-cb2;
    return r2;
    }

    return -1;
}