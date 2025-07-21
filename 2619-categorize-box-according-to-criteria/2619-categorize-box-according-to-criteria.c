char* categorizeBox(int l, int w, int h, int m) {
    int b=l>=pow(10,4) || w>=pow(10,4) || h>=pow(10,4) || ((long)h *(long)w*(long)l)>=pow(10,9);
    int h1=m>=100;
    if(b && h1) 
        return "Both";
    if(!b && !h1) 
        return "Neither";
    if(b) 
        return "Bulky";
    else 
        return "Heavy";
}