int maxDiff(int num) {
    int arr[9],in=0,m1,m2,i,j;
    while(num>0)
    {
        arr[in]=num%10;
        num/=10;
        in++;
    }
    for(i=in-1;i>=0;i--)
    {
        if(arr[i]!=9)
        {
            m1=arr[i];
            break;
        }
    }
    for(i=in-1;i>=0;i--)
    {
        if(arr[i]>1)
        {
            m2=arr[i];
            break;
        }
    }
    int s=1;
    if(m2!=arr[in-1])
    {
        s=0;
    }
    int a=0,b=0;
    for(int i=in-1; i>=0; i--)
    {
        if(arr[i] == m1){
            a= a*10 + 9;
        }
        else{
            a = a*10 + arr[i];
        }
        if(arr[i] == m2){
            b= b*10 + s;
        }
        else{
            b = b*10 + arr[i];
        }
    }
    return a-b;
}