/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* n, int nSize, int* index, int indexSize, int* returnSize) {
    int *a=malloc(10000*sizeof(int));
    int i;
     for(int i = 0 ; i < nSize ; i++){
        a[i] = -1;
    }
    for(int i = 0 ; i < nSize ; i++){
        if(a[index[i]] < 0)
            a[index[i]] = n[i];
        else{
            for(int j = nSize - 1; j > index[i] ; j--){
                a[j] = a[j-1]; 
            }
            a[index[i]] = n[i];
        }
        *returnSize = nSize;
    }
    return a;
}
