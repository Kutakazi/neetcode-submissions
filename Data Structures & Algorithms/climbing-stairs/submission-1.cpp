class Solution {
public:
    int climbStairs(int n) {
        vector<int> big(n + 5);

        big[0] = 1;
        big[1] = 2;
        for (int i = 2; i < n; i++) {
            big[i] = big[i - 1] + big[i - 2];
        }

        return big[n - 1];
    }
};
