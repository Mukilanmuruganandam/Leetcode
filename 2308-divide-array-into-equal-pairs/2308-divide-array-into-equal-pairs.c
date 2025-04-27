bool divideArray(int* a, int n) 
{
    int i,j,c,t;
    for (i=0;i<n-1;i++) 
    {
        for (j=i+1;j<n;j++) 
        {
            if (a[i]>a[j]) 
            {
                c = a[i];
                a[i] = a[j];
                a[j] =c;
            }
        }
    }
    t=0;
    for(i=0;i<n-1;i=i+2)
    {
        if(a[i]==a[i+1])
        t++;
    }
    if(n/2==t)
    return true;
    else 
    return false;
   
}