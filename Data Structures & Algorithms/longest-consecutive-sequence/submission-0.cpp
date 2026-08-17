class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : st) {
            
            if (!st.count(num - 1)) {
                int currentNum = num;
                int currentLen = 1;

                while (st.count(currentNum + 1)) {
                    currentNum++;
                    currentLen++;
                }

                maxLen = max(maxLen, currentLen);}}
                return maxLen;
        
    }
};
