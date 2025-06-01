int distanceTraveled(int m, int a) {
    int s=0;
    while(m>=5)
    {
        s+=50;
        m=m-5;

        if(a>0)
        {
            m=m+1;
            a=a-1;
        }
    }
    s=s+m*10;
    return s;
}