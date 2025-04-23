bool isHappy(int n) {
    int r,s;
    s=0;
    if(n==7)
    return true;
    if(n<10 && n!=1) 
    {
        return false;
    }

    while (n!=1) 
    {
        s=0;
        while(n>0) 
        {
            r=n%10; 
            s+=r*r;  
            n/=10;  
        }
        n=s;
        if(n==4) 
        {
            return false;
        }
    }

    return true;
}