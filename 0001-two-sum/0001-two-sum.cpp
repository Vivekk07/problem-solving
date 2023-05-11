class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        int i = 0, j = nums.size() -1;
        int temp = 0;
        unordered_map <int, int> umap;
        
        for(int l = 0; l < nums.size(); l++){
            umap[nums[l]] = l;
        }
        
        for(int l = 0; l < nums.size(); l++){
            if(umap[target-nums[l]] > l){
                ans.push_back(l);
                ans.push_back(umap[target-nums[l]]);
                temp = target-nums[l];
                break;
            }
            // umap[nums[l]] = l;
        }
        
        return ans;
    }
};