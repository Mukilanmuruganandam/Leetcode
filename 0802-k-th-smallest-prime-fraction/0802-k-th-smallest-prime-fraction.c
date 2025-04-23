int* kthSmallestPrimeFraction(int* a,int n,int k,int* returnSize){
    double s=0,s1=1;
    int* res=malloc(2*sizeof(int));
    while(1){
        double m=(s+s1)/2;
        int c=0,num=0,den=1;
        double max=0;
        for(int i=0,j=1;i<n-1;i++){
            while(j<n&&a[i]>=m*a[j])j++;
            c+=n-j;
            if(j<n&&(double)a[i]/a[j]>max){
                max=(double)a[i]/a[j];
                num=a[i];
                den=a[j];
            }
        }
        if(c==k){
            res[0]=num;
            res[1]=den;
            break;
        }else if(c<k){
            s=m;
        }else{
            s1=m;
        }
    }
    *returnSize=2;
    return res;
}
