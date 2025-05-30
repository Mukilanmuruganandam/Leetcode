int passThePillow(int n,int t){
    t=t%((n-1)*2)+1;
    if(t<(n*2-t))
        return t;
    else
        return (n*2-t);
}
