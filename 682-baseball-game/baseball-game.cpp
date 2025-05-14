class Solution {
public:
    int calPoints(vector<string>& operations) {
        int num1;
        int num2;
        int ans=0;
        stack<int> s;
        for(string i : operations)
        {
            if(i == "C") s.pop();
            else if(i == "D") s.push(s.top()*2);
            else if(i == "+")
            {
                num1 = s.top();
                s.pop();
                num2 = s.top();
                s.push(num1);
                s.push(num1 + num2);
            }
            else s.push(stoi(i));
        }
        while(s.size() != 0)
        {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};