int divide(int dividend, int divisor) {
    long long int s=dividend,s1=divisor;
    if(s/s1>pow(2,31)-1)
    {
        return(pow(2,31)-1);
    }
    else
    {
        return(s/s1);
    }    
}