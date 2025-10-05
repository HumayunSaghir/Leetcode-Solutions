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
    int getLength (ListNode *head){
        ListNode *curr = head;
        int count = 0;
        while(curr != NULL){
            curr = curr->next;
            count++;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n == 1){
            return NULL;
        }

        int size = getLength(head);
        int target = size - n;
        if(target == 0 && head->next != NULL){
            ListNode *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        ListNode *prev = head;
        ListNode *curr = prev->next;
        int count = 0;
        while(curr != NULL){
            if(count == target - 1){
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
                return head;
            }
            else{
                prev = curr;
                curr = curr->next;
                count++;
            }
        }

        return head;
    }
};