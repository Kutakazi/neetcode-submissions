class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int thing = (n + 1) * n / 2;
        int thing2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            thing2 += nums[i];
        }

        return thing - thing2;
    }
};