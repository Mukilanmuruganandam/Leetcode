class Solution {
    public int[] plusOne(int[] a) 
    {
        int n=a.length;

        for(int i=n-1;i>=0;i--) 
        {
            a[i]++;

            if(a[i]==10) 
            {
                a[i]=0;
            } 
            else 
            {
                return a;
            }
        }

        int[] newDigits = new int[n + 1];

        newDigits[0] = 1;

        return newDigits;
    }
}