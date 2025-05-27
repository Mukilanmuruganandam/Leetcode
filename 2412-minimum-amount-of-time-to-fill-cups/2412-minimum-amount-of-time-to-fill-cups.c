int fillCups(int* a,int n){
    int s,m,c;
    m=a[0];
    s=a[0]+a[1]+a[2];
    if(a[1]>m)
    m=a[1];
    if(a[2]>m)
    m=a[2];
    c=s/2;
    if(s%2!=0)
    c++;
    if(c>m)
    return c;
    return m;
}
