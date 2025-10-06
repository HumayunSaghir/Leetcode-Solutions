class Solution {
public:
    void reverseRow(vector<int> &nums){
        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

    void invertImage(vector<int> &nums){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                nums[i] = 0;
            }
            else if(nums[i] == 0){
                nums[i] = 1;
            }
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            reverseRow(image[i]);   
        }

        for(int i = 0; i < image.size(); i++){
            invertImage(image[i]);
        }

        return image;
    }
};