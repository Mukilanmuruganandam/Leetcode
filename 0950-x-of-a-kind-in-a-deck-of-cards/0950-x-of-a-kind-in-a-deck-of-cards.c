bool hasGroupsSizeX(int* a, int n) {
        int i=0,f[10000]={0},h=-1;
    for(i=0;i<n;i++)
    {
        f[a[i]]++;
    }
    for(i=0;i<10000;i++) 
    {
        if(f[i]>0) 
        {
            int x=h==-1?f[i]:h;
            int y=f[i];
            while(y!=0) 
            {
                int c=y;
                y=x%y;
                x=c;
            }
            
            h=x;
        }
    }
    if(h>1) 
    {
        return true;
    } 
    else{
        return false;
    }

    return 0;

    
}