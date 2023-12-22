// Samhith Patibandla
// 12/21/2023
// Solution for checking Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        int outNumber = 0, result, remainder;
        do {
            result = inNumber / 10;
            remainder = inNumber % 10;
            outNumber = (outNumber * 10) + remainder;
            inNumber = result;
        } while (result != 0);

        return (orgNumber == revNum);
    }
};