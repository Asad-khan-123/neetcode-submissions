class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size() -1;
        int low =0; int high = n;
        int mid;
        int minimum = INT_MAX;

        if(nums.size() == 1){
            return nums[0];
        }
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[low]<= nums[mid]){
                minimum = min(minimum, nums[low]);
                low = mid+1;
            } else{
                minimum = min(minimum, nums[mid]);
                high = mid-1;
            }
        }
        return minimum;
    }
};
