int accountBalanceAfterPurchase(int n) {
    while(n%10!=0)
    {   
        if(n%10>=5)
            n+=1;
        else
            n-=1;
    }
    return 100-n;
}