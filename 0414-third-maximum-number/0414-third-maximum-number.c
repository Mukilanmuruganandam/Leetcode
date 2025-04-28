int thirdMax(int* a, int n) {
    int i,j,big1,bigk,d,c;
    c=1;
    big1=a[0];
    for(i=0;i<n;i++)
    if(a[i]>big1)
    big1=a[i];
    d=big1;
    for(j=1;j<3;j++)
    {
        for(i=0;i<n;i++)
        if(big1>a[i])
    {
         bigk=a[i];
         break;
    }
    for(i=0;i<n;i++)
    if(big1>a[i] && a[i]>bigk)
    bigk=a[i];
    if(big1!=bigk)
    c++;
    big1=bigk;
    }

    if(n<3 || c<3)
    return d;
    else
    return bigk;
}
   