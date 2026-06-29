class Solution {
    public String addStrings(String num1, String num2) {

        java.math.BigInteger n1=new java.math.BigInteger(num1);
        java.math.BigInteger n2=new java.math.BigInteger(num2);

        java.math.BigInteger sum=n1.add(n2);
        return sum.toString();
    }
}