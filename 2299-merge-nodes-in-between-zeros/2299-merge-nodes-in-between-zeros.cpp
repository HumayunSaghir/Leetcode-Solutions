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
    void insertAtTail(ListNode *&head, ListNode *&tail, int value){
        ListNode *newNode = new ListNode(value);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else if(head->next == NULL){
            head->next = newNode;
            tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
            return;
        }

    }
    ListNode* mergeNodes(ListNode* head) {
        // Empty Case!
        if(head == NULL){
            return NULL;
        }

        // Single Node Case!
        if(head->next == NULL){
            return head;
        }

        ListNode *curr = head->next;
        vector<int> nums;
        int sum = 0;
        while(curr != NULL){
            if(curr->val == 0){
                nums.push_back(sum);
                sum = 0;
                curr = curr->next;
            }
            else{
                sum += curr->val;
                curr = curr->next;
            }
        }
        head = NULL;
        ListNode *tail = NULL;
        for(int i = 0; i < nums.size(); i++){
            insertAtTail(head, tail, nums[i]);
        }
        return head;
    }
};