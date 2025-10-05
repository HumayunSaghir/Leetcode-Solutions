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
    int countNodes(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* solve(ListNode *&head, int k){
        if(head == NULL){
            return head;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode * fwd = NULL;
        int count = 0;
        
        while(curr != NULL && count < k){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            count++;
        }

        if(curr != NULL && countNodes(curr) < k){
            head->next = curr;
            return prev;
        }

        if(curr != NULL){
            head->next = solve(curr, k);
        }

        return prev;

    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next == NULL){
            return head;
        }

        head = solve(head, k);

        return head;
    }
};