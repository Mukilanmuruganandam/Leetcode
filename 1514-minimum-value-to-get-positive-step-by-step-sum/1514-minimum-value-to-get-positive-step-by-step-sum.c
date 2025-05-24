int minStartValue(int* a, int n) {
    int s=0,i;
    int min=a[0];

    for(i=0;i<n;i++)
    {
        s=s+a[i];
        
        if(s<min)
        {
            min=s;
        }

    }

    if(min<0)
    {
        return 1+abs(min);
    }
    else
    {
        return 1;
    }

}