class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int> mpp;
        int maxFreq= 0;
        int ans;

        for(int i =0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto &x : mpp){
            if(x.second > maxFreq){
                maxFreq = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};