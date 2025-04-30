class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int maxCount=0;
        int wlen=word.length();
        int slen=sequence.length();
        for(int i=0;i<=slen-wlen;i++){
            int count=0;
            while(sequence.substr(i+count*wlen,wlen)==word) count++;
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};