class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        int b;
        int a;
        for (const auto& t : tokens) {
            cerr << t << '\n';
            switch (t.back()) {
                case '+':
                    b = s.top();
                    s.pop();
                    a = s.top();
                    s.pop();
                    s.push(a + b);
                    break;

                case '-':
                    b = s.top();
                    s.pop();
                    a = s.top();
                    s.pop();
                    s.push(a - b);
                    break;

                case '*':
                    b = s.top();
                    s.pop();
                    a = s.top();
                    s.pop();
                    s.push(a * b);
                    break;

                case '/':
                    b = s.top();
                    s.pop();
                    a = s.top();
                    s.pop();
                    s.push(a / b);
                    break;

                default:
                    s.push(stoi(t));
            }
        }

        return s.top();
    }
};
