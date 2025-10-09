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
    // Iterative approach!
    // int getMiddle(ListNode *head){
    //     int len = 0;
    //     ListNode *temp = head;
    //     while(temp != NULL){
    //         temp = temp->next;
    //         len++;
    //     }
    //     int result = (len / 2) + 1;
    //     return result;
    // }

    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL){
            return head;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // Iterative Approach!
    //     if(head->next == NULL){
    //         return head;
    //     }

    //     int target = getMiddle(head);
    //     int curr = 1;
    //     ListNode *temp = head;
    //     while(curr < target){
    //         temp = temp->next;
    //         curr++;
    //     }
    //     return temp;
    }
};