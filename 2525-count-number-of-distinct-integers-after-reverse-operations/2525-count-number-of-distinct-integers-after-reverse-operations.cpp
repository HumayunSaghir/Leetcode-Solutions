class Solution {
public:
    bool binarySearch(vector<int> &nums, int key, int start, int end){
        int s = start;
        int e = end;
        int mid = s + (e - s) / 2;
        while(s <= e){
            if(nums[mid] == key){
                return true;
            }
            else if(nums[mid] > key){
                e = mid - 1;
            }
            else{
                s = mid  + 1;
            }
        
            mid = s + (e - s) / 2;
        }
        return false;
    }

    int countDistinctIntegers(vector<int>& nums) {
        int length = nums.size();
        for(int i = 0; i < length; i++){
            string str = to_string(nums[i]);
            string temp = "";
            for(int j = str.length() - 1; j >= 0; j--){
                if((str[j] == '0') && (j == str.length() - 1)){
                    continue;
                }
                else{
                    temp.push_back(str[j]);
                }
            }
            nums.push_back(stoi(temp));
        }
        sort(nums.begin(), nums.end());
    // now counting
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(binarySearch(nums, nums[i], 0, i - 1) == false){
                count++;
            }
        }

        return count;
    }
};