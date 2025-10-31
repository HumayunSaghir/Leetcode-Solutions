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
    int getMiddleNode(ListNode *head){
        int target = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            target++;
        }
        int ans = target / 2;
        return ans;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            head = NULL;
            return head;
        }

        int middle = getMiddleNode(head);
        int count = 0;
        ListNode *temp = head;
        while(count != (middle - 1)){
            temp = temp->next;
            count++;
        }
        ListNode *todelete = temp->next;
        temp->next = temp->next->next;
        delete (todelete);
        return head;
    }
};