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
    ListNode* solve(ListNode *head){
        if(head == NULL){
            return NULL;
        }

        ListNode *prev = head;
        ListNode *curr = prev->next;

        // Processing + base case 2.
        if(curr != NULL){
            prev->next = curr->next;
            curr->next = prev;
        }
        else{
            return prev;
        }

        prev->next = solve(prev->next);

        head = curr;

        return head;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return NULL;
        }

        if(head->next == NULL){
            return head;
        }

        head = solve(head);

        return head;

    }
};