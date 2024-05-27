class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit and work backwards
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If digit is 9, it becomes 0
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add a 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
