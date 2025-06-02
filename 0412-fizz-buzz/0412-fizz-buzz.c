/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n,int* r){
    *r=n;
    char** a=(char**)malloc(n*sizeof(char*));
    int i;
    for(i=0;i<n;i++){
        a[i]=(char*)malloc(9);
        if((i+1)%3==0&&(i+1)%5==0)
            sprintf(a[i],"FizzBuzz");
        else if((i+1)%3==0)
            sprintf(a[i],"Fizz");
        else if((i+1)%5==0)
            sprintf(a[i],"Buzz");
        else
            sprintf(a[i],"%d",i+1);
    }
    return a;
}
