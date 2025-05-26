int countHillValley(int* a,int n) {
    int c=0,i,j;
    for(i=1,j=0;i<n-1;i++)
        if((a[j]<a[i] && a[i]>a[i+1]) || (a[j]>a[i] && a[i]<a[i+1])) 
        {
            c++;
            j=i;
        }            
    return c;   
}