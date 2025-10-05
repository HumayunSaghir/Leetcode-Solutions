class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;

        if(strs.size() == 1 && strs[0] == ""){
            return result;
        }
        else if(strs.size() == 1){
            return strs[0];
        }

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        if(first.length() == 0 || last.length() == 0){
            return result;
        }

        int i = 0;
        int j = 0;

        while(true){
            if((i < first.length() && j < last.length())&&(first[i] == last[j])){
                result.push_back(first[i]);
                i++;
                j++;

                
            }
            else{
                break;
            }
        }

        return result;
        
        
        
    }
};