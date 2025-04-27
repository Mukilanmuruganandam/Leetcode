char* capitalizeTitle(char* a) 
{
    int c = 0;
    for (int i = 0; ; i++) 
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;

        if (a[i] == ' ' || a[i] == '\0') {
            if (c > 2)
                a[i - c] -= 32;  
            if (a[i] == '\0')
                break;  
            c = 0;  
        } 
        else 
        {
            c++;  
        }
    }
    return a;
}
