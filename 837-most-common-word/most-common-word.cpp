class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> map;
        string s;
        for(int i=0;i<paragraph.size();i++){
            if((paragraph[i] >='a' && paragraph[i] <='z') || (paragraph[i] >='A' && paragraph[i] <='Z')){
                s.push_back(tolower(paragraph[i]));
            }else if(!s.empty()){
                map[s]++;
                s="";
            }
        }
        if(!s.empty()) map[s]++;
        for(auto i : banned) map[i]=0;
        int ans=0;
        string res;
        for(auto i: map){
            if(ans<i.second){
                ans=i.second;
                res=i.first;
            }
        }
        return res;
    }
};