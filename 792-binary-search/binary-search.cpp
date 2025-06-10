class Solution {
public:
    int search(vector<int>& arr, int k) {
              int n = arr.size();
        int left = 0;
        int right = n - 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(arr[mid] == k)
            {
                return mid;
            }
            else if(arr[mid] < k)
            {
                left = mid + 1;
            }
            else
            {
                
                right = mid - 1;
            }
        }
        return -1;
    }
};