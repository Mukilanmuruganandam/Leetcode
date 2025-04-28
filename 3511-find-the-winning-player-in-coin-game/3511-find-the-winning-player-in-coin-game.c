char* winningPlayer(int x, int y) {
    int a,b;
    a=y/4;
    if(x<a)
    b=x; 
    else 
    b=a;
    if(b%2!=0) 
    return "Alice";
    else 
    return "Bob";
    
}
