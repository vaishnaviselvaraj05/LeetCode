class NumArray {
private:
    vector<int> preSums;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        preSums.resize(n+1,0);
        for(int i=0;i<n;i++) preSums[i+1] = preSums[i] + nums[i];

    }
    
    int sumRange(int left, int right) {
        return preSums[right+1] - preSums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */