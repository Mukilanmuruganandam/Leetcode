int numWaterBottles(int n,int n1) {
        int c=0,r,s;
        c=c+n;
        while(n>=n1) 
        {      
            r=n%n1;
            s=n/n1;
            n=s+r;
            c=c+s;
        }
        return c;
}