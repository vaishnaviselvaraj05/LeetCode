class Solution {
public:
    int minLength(string s) {
        stack<char> stack;
        for(char c : s)
        {
            if(!stack.empty())
            {
                char top = stack.top();
                if((top == 'A' && c == 'B') || (top == 'C' && c == 'D'))
                {
                    stack.pop();
                    continue;
                }
            }
            stack.push(c);
        }
        return stack.size();
    }
};