class Solution {
public:
    bool isAlpha(const char& b) {
        if ('0' <= b && b <= '9') {
            return true;
        } else if ('a' <= b && b <= 'z') {
            return true;
        } else if ('A' <= b && b <= 'Z') {
            return true;
        }

        return false;
    }

    bool isPalindrome(string s) {
        auto a = s.begin();
        auto b = s.end() - 1;

        while (!isAlpha(*a)) {
            a++;
        }
        
        while (!isAlpha(*b)) {
            b--;
        }

        while (a < b) {
            if (tolower(*a) != tolower(*b)) {
                return false;
            }

            a++;
            b--;

            while (!isAlpha(*a)) {
                a++;
            }
            
            while (!isAlpha(*b)) {
                b--;
            }
        }

        return true;
    }
};
