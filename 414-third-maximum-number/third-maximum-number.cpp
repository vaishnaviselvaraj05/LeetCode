class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int f,s,t;
        bool fs=false,ss=false,ts=false;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if((fs && num == f) || (ss && num == s) || (ts && num == t)) continue;
            if(!fs || num>f){
                t=s;
                ts=ss;
                s=f;
                ss=fs;
                f=num;
                fs=true;
            }
            else if(!ss || num>s){
                t=s;
                ts=ss;
                s=num;
                ss=true;
            }
            else if(!ts || num>t){
                t=num;
                ts=true;
            }
        }
        return ts ? t : f;    
    }
};