int canMeasureWater(int x,int y,int target){
    if(x+y<target)
        return 0;
    int a=x,b=y,t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return target%a==0;
}
