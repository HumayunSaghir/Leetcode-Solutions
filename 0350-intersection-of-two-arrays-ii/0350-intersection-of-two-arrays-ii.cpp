class Solution {
public:
int totalOcc(vector<int> nums, int key){
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == key){
            count++;
        }
    }
    return count;
}
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> common;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    bool found = false;
                    for(int k = 0; k < common.size(); k++){
                        if(nums1[i] == common[k]){
                            found = true;
                            break;
                        }
                    }
                    if(found == false){
                        common.push_back(nums1[i]);
                    }
                }
            }
        }

        vector<int> temp;
        for(int i = 0; i < common.size(); i++){
            int r1 = totalOcc(nums1, common[i]);
            int r2 = totalOcc(nums2, common[i]);
            if(r1 == r2){
                for(int j = 1; j <= r1; j++){
                    temp.push_back(common[i]);
                }
            }
            else if(r1 < r2){
                for(int j = 1; j <= r1; j++){
                    temp.push_back(common[i]);
                }
            }
            else if(r1 > r2){
                for(int j = 1; j <= r2; j++){
                    temp.push_back(common[i]);
                }
            }
        }
        return temp;
    }
};