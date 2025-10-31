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
    ListNode* reverseList(ListNode *&head){
        // Empty Case!
        if(head == NULL){
            return NULL;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *fwd = NULL;
        while(curr != NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }

        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        // Empty Case!
        if(head == NULL){
            return NULL;
        }

        // Single Node Case!
        if(head->next == NULL){
            return head;
        }

        head = reverseList(head);
        int max = head->val;
        ListNode *prev = head;
        ListNode *curr = head->next;
        while(curr != NULL){
            if(curr->val < max){
                ListNode *temp = curr;
                curr = curr->next;
                prev->next = curr;
                temp->next = NULL;
                delete temp;
            }
            else{
                prev = curr;
                curr = curr->next;
                max = prev->val;
            }
        }

        head = reverseList(head);
        return head;
    }
};