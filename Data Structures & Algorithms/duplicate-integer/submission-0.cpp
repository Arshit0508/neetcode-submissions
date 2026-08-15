class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int>mpp;
        for(int n :nums){
            mpp[n]++;
        }
        for(auto& ind:mpp){
            if(ind.second>1)return true;
        }
        return false;


        
    }
};