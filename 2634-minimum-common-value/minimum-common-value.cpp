class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set2(nums2.begin(),nums2.end());
        int common = -1;
        for(int num:nums1){
            if(set2.find(num) != set2.end()){
                if(common == -1 || num<common) common=num;
            }
        }
        return common;
    }
};