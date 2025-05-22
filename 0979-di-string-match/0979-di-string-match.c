/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* s, int* returnSize) {
    int n=strlen(s),i;
    int* arr=malloc(sizeof(int) * (n + 1));
    int a=0,b=n;
    for(i=0;i<n;i++) 
    {
        if(s[i]=='I') 
        {
            arr[i]=a;
            a++;
        } else 
        {
            arr[i]=b;
            b--;
        }
    }

    arr[n]=a;
    *returnSize=n + 1;
    return arr;
}