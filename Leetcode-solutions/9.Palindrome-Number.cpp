//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
 public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int revNum = 0;
        int duplicate = x;

        while (x != 0) {
         int lastDigit = x % 10;
         if (revNum > INT_MAX / 10) {
            return false;
         }
         revNum=(revNum*10)+lastDigit;
         x=x/10;
        }
        
     if(duplicate==revNum){
        return true;
     }
     else{
        return false;
     }
    }
};
