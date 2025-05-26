int findMiddleIndex(int* a, int n){
    int s1=0,s2=0,i;
    for(i=0;i<n;i++)
    {
        s1+=a[i];
    }
    for(i=0;i<n;i++)
    {
        s1-=a[i];
        if(s1==s2)
        {
            return i;
        }
        s2+=a[i];
    }
    return -1;

}