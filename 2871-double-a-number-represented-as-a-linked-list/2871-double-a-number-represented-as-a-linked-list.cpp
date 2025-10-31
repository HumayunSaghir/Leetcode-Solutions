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
            head = newNode;
            tail = newNode;
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

    ListNode *solve(ListNode *first, ListNode *second){
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        first = reverse(first);
        second = reverse(second);
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

            int sum = value1 + value2 + carry;
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

        ansHead = reverse(ansHead);
        return ansHead;
    }

    ListNode* doubleIt(ListNode* head) {
        if(head->next == NULL && head->val == 0){
            return head;
        }

        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;

        ListNode *temp = head;
        while(temp != NULL){
            insertAtTail(head2, tail2, temp->val);
            temp = temp->next;
        }

        if(head2->val <= head->val){
            return solve(head2, head);
        }
        else{
            return solve(head, head2);
        }
    }
};