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
        if(tail == NULL){
            tail = newNode;
            head = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    ListNode *reverse(ListNode *head){
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ansHead = NULL;
        ListNode *ansTail = ansHead;
        ListNode *first = reverse(l1);
        ListNode *second = reverse(l2);
        int carry = 0;
        while(first != NULL || second != NULL || carry != 0){
            int value1 = 0;
            if(first != NULL){
                value1 = first->val;
            }

            int value2 = 0;
            if(second != NULL){
                value2 = second->val;
            }

            int sum = carry + value1 + value2;
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
        return reverse(ansHead);
    }
};