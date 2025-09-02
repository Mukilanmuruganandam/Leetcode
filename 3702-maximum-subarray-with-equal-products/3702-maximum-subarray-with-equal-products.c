int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
long long lcm(long long a,long long b){
    return (a/gcd(a,b))*b;
}

int maxLength(int* a,int n){
    int ml=0;
    for(int i=0;i<n;i++){
        int prod=1;
        int g=a[i];
        long long l=a[i];
        for(int j=i;j<n;j++){
            prod=(long long)prod*a[j];
            g=gcd(g,a[j]);
            l=lcm(l,a[j]);
            if(prod==(long long)g*l){
                if(j-i+1>ml)ml=j-i+1;
            }
        }
    }
    return ml;
}
