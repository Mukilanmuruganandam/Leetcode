class Solution {
    public boolean isPalindrome(String s) {

        int l = 0;
        int r = s.length() - 1;

        char[] arr = s.toCharArray();

        while (l < r) {

            if (!Character.isLetterOrDigit(arr[l])) {
                l++;
            }
            else if (!Character.isLetterOrDigit(arr[r])) {
                r--;
            }
            else {

                if (Character.toLowerCase(arr[l]) != Character.toLowerCase(arr[r])) {
                    return false;
                }

                l++;
                r--;
            }
        }

        return true;
    }
}