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
    int GCD(int x, int y){
        if(x == 0 && y != 0){
            return y;
        }

        if(x != 0 && y == 0){
            return x;
        }

        while(x != y){
            if(x > y){
                x = x - y;
            }
            else{
                y = y - x;
            }
        }
        return x;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // Single node case!
        if(head->next == NULL){
            return head;
        }

        ListNode *prev = head;
        ListNode *curr = prev->next;
        while(curr != NULL){
            // int gcd = GCD(prev->val, curr->val);
            ListNode *newNode = new ListNode(GCD(prev->val, curr->val));
            newNode->next = curr;
            prev->next = newNode;
            prev = prev->next->next;
            curr = curr->next;
        }
        return head;
    }
};