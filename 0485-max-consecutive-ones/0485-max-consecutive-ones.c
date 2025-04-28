int findMaxConsecutiveOnes(int* a, int n) {
    int c,max,i;
    max=c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=c+1;
        }
        else
        {
            if(c>max)
            {
                max=c;
            }
            c=0;
        }
    }

    if(c>max)
    {
        max=c;
    }
    return max;
}