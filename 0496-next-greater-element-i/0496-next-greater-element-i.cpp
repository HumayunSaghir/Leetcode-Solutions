class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i = 0; i < nums1.size(); i++){

            int element1 = nums1[i];

            for(int j = 0; j < nums2.size(); j++){
                
                if(nums2[j] == element1){

                    bool found2 = false;

                    for(int k = j + 1; k < nums2.size(); k++){
                        if(nums2[k] > element1){
                            result.push_back(nums2[k]);
                            found2 = true;
                            break;
                        }
                    }

                    if(found2 == false){
                        result.push_back(-1);
                    }

                }
            }
        }

    return result;
    
    }
};