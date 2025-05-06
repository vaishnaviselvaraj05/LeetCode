class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.." };
        unordered_map<char,string> map;
        for(int i=0;i<26;i++){
            char letter = 'a' + i;
            map[letter] = morse[i];
        }
        unordered_map<string,int> tmap;
        for(string word : words){
            string transformed;
            for(char ch : word) transformed += map[ch];
            tmap[transformed]++;
        }
        return tmap.size();
    }
};