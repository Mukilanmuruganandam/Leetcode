class Solution {
    public String toGoatLatin(String sentence) {

        String arr[]=sentence.split(" ");
        int n=arr.length;

        int addcount=1;
        StringBuilder sb = new StringBuilder();
        for(String str:arr)
        {
            if("aeiouAEIOU".indexOf(str.charAt(0))!=-1)
            {
                 sb.append(str).append("ma").append("a".repeat(addcount++)).append(" ");
            }
            else
            {
             sb.append(str.substring(1,str.length())).append(str.substring(0,1)).append("ma").append("a".repeat(addcount++)).append(" ");
            }

        }
        return sb.toString().trim();
        
    }
}