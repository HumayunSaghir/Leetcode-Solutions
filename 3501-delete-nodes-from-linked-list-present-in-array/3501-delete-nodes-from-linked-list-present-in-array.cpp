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
    void check(vector<int> nums, map<int, bool> &record){
        for(int i = 0; i < nums.size(); i++){
            record[nums[i]] = true;
        }
    }

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, bool> record;
        check(nums, record);
        ListNode *prev = head;
        ListNode *curr = prev->next;
        while(curr != NULL){
            if(record[prev->val] == true && prev == head){
                ListNode *todelete = prev;
                prev = curr;
                curr = curr->next;
                head = prev;
                todelete->next = NULL;
                delete (todelete);
            }
            else if(record[curr->val] == true){
                ListNode *remove = curr;
                curr = curr->next;
                remove->next = NULL;
                prev->next = curr;
                delete remove;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};