int alternateDigitSum(int n) {
    int r=0,a,s;
    while(n>0) 
    {
        r=r*10+n%10;  
        n=n/10;
    }

    a=1,s=0;
    while(r>0) 
    {
        s=s+a*(r%10);  
        a=a*-1;                
        r=r/10;
    }

    return s;
}