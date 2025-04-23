int countLargestGroup(int n){
    int a[1000]={0},max=0,c=0;
    for(int i=1;i<=n;i++){
        int s=0,num=i;
        while(num){
            s+=num%10;
            num/=10;
        }
        a[s]++;
    }
    for(int i=0;i<1000;i++)
    if(a[i]>max)
    max=a[i];
    for(int i=0;i<1000;i++)
    if(a[i]==max)
    c++;
    return c;
}