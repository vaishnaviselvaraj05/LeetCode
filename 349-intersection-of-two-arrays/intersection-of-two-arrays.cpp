class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(!exists(res,nums1[i])){
                        res.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        return res;
    }

    bool exists(vector<int>& v,int val){
        for(int num:v){
            if(num==val) return true;
        }
        return false;
    }
};