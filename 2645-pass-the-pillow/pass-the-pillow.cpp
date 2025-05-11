class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        int dir = 1;
        for(int i = 0; i < time; i++){
            pos += dir;
            if(pos==n || pos==1) dir*=-1;
        }
        return pos;
    }
};