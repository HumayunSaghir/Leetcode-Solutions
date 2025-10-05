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
    int findLength(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        return count;
    
    }

    ListNode* operate(ListNode *head, int target){
        ListNode *start = head;
        ListNode *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = start;

        int count = 0;
        while(count < target ){
            head = head->next;
            count++;
        }

        temp = start;
        while(temp->next != head){
            temp = temp->next;
        }

        temp->next = NULL;

        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        int length = findLength(head);
        k = k % length;
        int limit = length - k;
        head = operate(head, limit);
        return head;
    }
};