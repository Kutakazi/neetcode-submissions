class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int req = target - nums[i];

            if (map.contains(req)) {
                return { map[req], i };
            }
            map[nums[i]] = i;
        }

        return {};
    }
};