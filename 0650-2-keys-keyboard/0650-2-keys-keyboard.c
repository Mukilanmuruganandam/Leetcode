int minSteps(int n) {
    int c=1,p,s;
    p=0;
    s=0;
    while(c<n)
    {
        if((n-c)%c==0)
        {
            p=c;
            c+=c;
            s+=2;
        }
        else if(p!=0 && (n-c)%p==0)
        {
            c+=p;
            s++;
        }
        else
        {
            return -1;
        }
    }
    return s;  
}