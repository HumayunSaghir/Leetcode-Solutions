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
    void insertAtTail(ListNode *&head, ListNode *&tail, int data){
        ListNode *newNode = new ListNode(data);
        if(tail == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry = 0;
       ListNode *ansHead = NULL;
       ListNode *ansTail = NULL;
       ListNode *first = l1;
       ListNode *second = l2;
       while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first->val;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second->val;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;

        if(first != NULL){
            first = first->next;
        }

        if(second != NULL){
            second = second->next;
        }

       }
       return ansHead; 
    }
};