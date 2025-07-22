int computeArea(int ax1,int ay1,int ax2,int ay2,int bx1,int by1,int bx2,int by2){
    int x1,x2,a1,a2,a=0;
    int m2,m1,m4,m3;
    if(ax2<bx2)
    m2=ax2;
    else 
    m2=bx2;
    if(ax1>bx1)
    m1=ax1;
    else 
    m1=bx1;
    x1=m2-m1;
    if(ay2<by2)
    m4=ay2;
    else 
    m4=by2;
    if(ay1>by1)
    m3=ay1;
    else 
    m3=by1;
    x2=m4-m3;
    a1=(ax2-ax1)*(ay2-ay1);
    a2=(bx2-bx1)*(by2-by1);
    if(x1>0&&x2>0)
        a=x1*x2;
    return a1+a2-a;
}
