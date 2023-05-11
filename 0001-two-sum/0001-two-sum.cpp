class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map <int, int> umap;
        
        for(int l = 0; l < nums.size(); l++){
            
            if(umap[target-nums[l]]>0){
                ans.push_back(umap[target-nums[l]]-1);
                ans.push_back(l);
                break;
            }
            
            umap[nums[l]] = l+1;
            
            
        }
        
        return ans;
    }
};