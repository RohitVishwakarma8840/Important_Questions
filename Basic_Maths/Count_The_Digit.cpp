// https://leetcode.com/problems/count-the-digits-that-divide-a-number/descrip

class Solution {
public:
    int countDigits(int num) {
        int count = 0;  

        int originalNum = num;  
        
        while (num > 0) {
            int digit = num % 10;  
            
            if (digit != 0 && originalNum % digit == 0) {
                count++;
            }
            
            num = num / 10; 
        }

        return count;
    }
};
