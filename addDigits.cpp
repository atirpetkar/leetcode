/*
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/

// METHOD 1: With loop
     int addDigits1(int num) {
         if (num < 10) return num;
        
         while (num >= 10){
             int sum = 0;
             while (num > 0){
                 sum += num%10;
                 num /= 10;
             }
             num = sum; // for next iteration, the sum becomes the new number
         }

         return num;
     }


// METHOD 2: Without loop
int addDigits2(int num) {
    if (num < 10) return num;
    return 1 + (num-1)%9;
    
}
