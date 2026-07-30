class Solution {
    public int[] numberOfLines(int[] widths, String s) {
        int line=1;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int width=widths[s.charAt(i)-'a'];
            if(sum+width>100)
            {
                line++;
                sum=0;
            }
            sum+=width;
        }

        return new int[]{line,sum};
        
    }
}