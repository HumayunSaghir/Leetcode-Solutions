class Solution {
public:

    bool check(vector<int> nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                return true;
            }
        }

        return false;
    
    }

    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size() == 1){
            return true;
        }
        
        unordered_map<int, int> map;
        for(int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }

        vector<int> nums;

        for(auto x : map){
            if(check(nums, x.second) == true){
                return false;
            }
            else{
                nums.push_back(x.second);
            }
        }

        return true;    
    }
};