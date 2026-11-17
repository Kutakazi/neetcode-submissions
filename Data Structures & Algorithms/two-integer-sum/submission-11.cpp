class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }

        for (const auto &a : nums) {
            int b = target - a;
            if (b == a && m[b].size() == 1) continue;
            
            if (m[b].size() == 1) {
                if (m[b][0] > m[a][0]) {
                    return vector<int>{m[a][0], m[b][0]};
                } else {
                    return vector<int>{m[b][0], m[a][0]};
                }
            } else if (m[b].size() >= 2) {
                return vector<int>{m[a][0], m[b][1]};
            }
        }

        return vector<int>{};
    }
};
