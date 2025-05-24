int minOperations(char** a, int n) {
    int s=0,i;
    for(i=0;i<n;i++) 
    {
        char* a1=a[i];
        if(a1[0]=='.' && a1[1]=='.' && a1[2]=='/' && a1[3]=='\0') 
        {
            if(s>0) 
            s--;
        }
        else if(a1[0]=='.' && a1[1]=='/' && a1[2]=='\0') 
        {
            continue;
        }
        else 
        {
            s++;
        }
    }

    return s;
}
