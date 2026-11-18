class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b = 0;
        for (const auto& a : nums) {
            b ^= a;
        }

        return b;
    }
};
