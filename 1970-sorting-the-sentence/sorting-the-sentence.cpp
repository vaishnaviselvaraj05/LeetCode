class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        string result ="";
        vector<pair<int,string>>v;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(!isdigit(s[i]) && s[i] != ' ')
            {
                temp += s[i];
            }
            else if(s[i] != ' ')
            {
                v.push_back({s[i] -'0',temp});
                temp.clear();
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].second.size();j++)
            {
                result +=v[i].second[j];
            }
            if(i<v.size()-1) result += ' ';
        }
        return result;
    }
};