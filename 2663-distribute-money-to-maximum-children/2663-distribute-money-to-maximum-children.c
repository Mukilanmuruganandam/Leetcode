int distMoney(int m,int c) {
    if(c>m) 
    return -1;
        if(8*c<m)
        {
            return c-1;
        }
        if(8*c==m) 
        return c;
        m=m-c;
        if(7*(c-1)<m)
        {
            int r=m%7;
            if(r==3)
                return c-2;
            return c-1;
        }
        return m/7;
    
}