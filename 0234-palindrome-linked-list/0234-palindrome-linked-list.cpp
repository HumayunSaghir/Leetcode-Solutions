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
    bool check(vector<int> nums){
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            if(nums[start] != nums[end])
                return false;
            
            start++;
            end--;
        }

        return true;
    }

    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode *temp = head;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        bool ans = check(nums);

        return ans;
    }
};