class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int, int> m1;
        for(int i = 0; i < nums.size(); i++) m1[nums[i]]++;
        
        vector<vector<int>> m2(nums.size()+1);
        for(auto i = m1.begin(); i != m1.end(); i++)  m2[i->second].push_back(i->first);
        
        vector<int> res;
        for(int i = nums.size(); i >= 0; i--) {
            if (res.size() >= k) break;
            if (!m2[i].empty()) res.insert(res.end(), m2[i].begin(), m2[i].end());
        }
        
        return res;
    }
};