/*
 
 Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
 
 Example 1:
 
 Input: 121
 Output: true
 Example 2:
 
 Input: -121
 Output: false
 Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 Example 3:
 
 Input: 10
 Output: false
 Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 Follow up:
 
 Could you solve it without converting the integer to a string?
 */


class Solution {
    public:
    bool isPalindrome(int x) {
        //for x <= 0 and if x != 0 and last digit == 0 ==> return false
        if (x < 0 || (x != 0 && x%10 == 0)){
            return false;
        }
        
        int reversed = 0;
        int original = x;
        while(x != 0){
            //int temp = reversed*10 + x%10;
            // if (temp/10 != reversed){
            //     return false;
            // }
            reversed = reversed*10 + x%10;
            x = x / 10;
        }
        return reversed == original;
        
    }
};
