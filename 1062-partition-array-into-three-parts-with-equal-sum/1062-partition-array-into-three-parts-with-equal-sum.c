bool canThreePartsEqualSum(int* a, int n) {
     
int i,s=0,c,x,y;
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }

    if(s%3!=0)
    {
        return false;
    }
     else
    {   i=0;
        x=s/3;
        y=0;
        c=0;

        for(i=0;i<n;i++)
        {
            y+=a[i];

            if(y==x)
            {
                c++;
                y=0;
            }
        }
        return c>=3;

     }
    
    
}