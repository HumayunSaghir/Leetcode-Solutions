class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Step 1) Create a hashmap.
        map<string, vector<string> > mp;

        // Step 2) Insert sorted keys into hashmap and initialize arrays.
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str] = {};
        }

        // Compare the orignal array string and add to result accordingly.
        
        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for(auto x : mp){
            result.push_back(x.second);
        }

        return result;
    }
};