long long findTheArrayConcVal(int* a, int n) {
    long long int s=0,c,d;
    int i,j=n-1;
    for(i=0;i<=j;i++)
    {
        c=a[j],d=1;
        while(c>0)
        {
            c=c/10;
            d*=10;
        }
        if(i==j)
        {
            s+=a[i];
            break;
        }
        s+=((a[i]*d)+a[j]);
        j--;
    }
    return s;
}