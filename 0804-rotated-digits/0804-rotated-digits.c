int rotatedDigits(int n) 
{
    int s=0,i,f,c,r;
    for(i=1;i<=n;i++)
    {
        f=0;
        c=i;
        while(c>0)
        {
            r=c%10;
            if(r==3||r==7||r==4)
            {
                f=0;
                break;
            }
            if(r==2||r==5||r==6||r==9){
                f=1;
            }
            c/=10;
        }
            if(f)
            {
                s++;
            }
    }
        return s;
}