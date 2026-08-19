class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> freq;
        vector<int> ans;
        vector<pair<int, int>> v;
        int n= nums.size();

        for(int i=0; i<n; i++){
            int num= nums[i];
            freq[num]++;
        }

        for(auto &x: freq){
            v.push_back({x.first, x.second});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second> b.second;
        });

        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
        
    }

};
