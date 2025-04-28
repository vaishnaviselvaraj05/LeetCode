class Solution {
public:
    string reversePrefix(string word, char ch) {
     int pos = -1;
     for(int i = 0; i < word.length(); i++){
        if(word[i] == ch) {
            pos = i;
            break;
        }
     }
     if(pos == -1) return word;
     for(int i = 0; i <= pos/2; i++) swap(word[i] , word[pos-i]);
     return word;   
    }
};