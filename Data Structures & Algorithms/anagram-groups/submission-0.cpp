class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>>mpp;

        for(auto& str:strs){
            string temp=str;
            sort(begin(temp),end(temp));
            mpp[temp].push_back(str);

            
        }
        for(auto& itr:mpp){
            ans.push_back(itr.second);
        }
        return ans;

        
    }
};
