/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reverseArray(vector<int> &nums){
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode *temp1 = head;
        while(temp1 != NULL){
            int value = temp1->val;
            nums.push_back(value);
            temp1 = temp1->next;
        }
        reverseArray(nums);
        int max = -1;
        temp1 = head;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] + temp1->val > max){
                max = (nums[i] + temp1->val);
            }
            temp1 = temp1->next;
        }
        return max;
    }
};