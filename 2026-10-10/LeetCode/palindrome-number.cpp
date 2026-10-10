
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int originalNumber = x;
        int reversedNumber = 0;

        while (x > 0) {
            int lastDigit = x % 10;

            // Check for integer overflow
            if (reversedNumber > (INT_MAX - lastDigit) / 10) {
                return false;
            }

            reversedNumber = reversedNumber * 10 + lastDigit;
            x = x / 10;
        }

        return originalNumber == reversedNumber;
    }
};
