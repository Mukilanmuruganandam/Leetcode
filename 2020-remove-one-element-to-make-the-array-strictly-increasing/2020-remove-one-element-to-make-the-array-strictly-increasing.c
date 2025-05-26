
bool canBeIncreasing(int* a, int n){
    int c=0,i; 
    
    for(i=1;i<n;i++) 
    {
        if(a[i-1]<a[i])
            continue; 
        else 
        {
            c++;     
            if(c>1)         
                return false; 
            if(i-2<0)
                continue; 
            if(a[i-2]<a[i])    
                continue;
            else
                a[i]=a[i-1];
        }
    }
    return true;
}
