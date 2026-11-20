class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *piles.begin();

        for (auto p : piles) {
            high = max(p, high);
            cerr << "a " << high << '\n'; 
        }

        while (low <= high) {
            int mid = (high + low) / 2;
            cerr << "Vars " << high << ' ' << mid << ' ' << low << '\n';

            long long time = 0;
            for (auto p : piles) {
                time += ceil(1.0 * p / mid);
            }
            cerr << "Time " << time << '\n'; 

            if (time <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
