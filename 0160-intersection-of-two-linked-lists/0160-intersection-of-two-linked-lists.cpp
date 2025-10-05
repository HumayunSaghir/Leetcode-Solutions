/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Empty Case!
        if(headA == NULL || headB == NULL){
            return NULL;
        }

        ListNode *curr1 = headA;
        ListNode *curr2 = headB;
        ListNode *start = headB;
        bool intersect = false;
        ListNode *intersection = NULL;
        while(curr1 != NULL){
            if(curr1 == curr2){
                intersect = true;
                intersection = curr1;
                break;
            }
            else{
                curr2 = curr2->next;
                if(curr2 == NULL){
                    curr2 = start;
                    curr1 = curr1->next;
                }
            }
        }
        return intersection;
    }
};