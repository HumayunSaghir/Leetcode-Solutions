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
    ListNode* solve(ListNode *&head, int val){
        // Empty Case!
        if(head == NULL){
            return head;
        }

        // All duplicate and head case
        while(true){
            if(head->val == val){
                ListNode *temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
                if(head == NULL){
                    break;
                }
            }
            else{
                break;
            }
        }

        // Normal cases
        if(head != NULL){
            ListNode *prev = head;
            ListNode *curr = prev->next;
            while(curr != NULL){
                if(curr->val == val){
                    prev->next = curr->next;
                    ListNode *temp = curr;
                    curr = curr->next;
                    delete temp;
                }
                else{
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
        return head;
    }
    ListNode* removeElements(ListNode* head, int val) {
        head = solve(head, val);
        return head;
    }
};