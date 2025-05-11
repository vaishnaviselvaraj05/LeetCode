class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord=0;
        for(string sentence:sentences){
            int count=1;
            for(char ch:sentence){
                if(ch==' ') count++;
            }
            maxWord=max(maxWord,count);
        }
        return maxWord;
    }
};