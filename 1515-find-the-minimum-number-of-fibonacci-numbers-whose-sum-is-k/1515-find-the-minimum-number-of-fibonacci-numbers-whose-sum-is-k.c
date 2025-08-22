int findMinFibonacciNumbers(int k) {
    long long a=1,b=1,s,c=0;
    while(b<=k) 
    {
        s=a+b;
        a=b;
        b=s;
    }
    while(k>0) 
    {
        if(a<=k) 
        {
            k=k-a;
            c++;
        }

        s=b-a;
        b=a;
        a=s;
    }

    return c;
}