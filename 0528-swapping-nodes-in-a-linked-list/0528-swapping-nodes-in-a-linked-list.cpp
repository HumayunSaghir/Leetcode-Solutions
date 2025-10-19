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
    int getLength(ListNode *head){
        int length = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        return length;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 1;
        ListNode *node1 = head;
        int size = getLength(head);
        while(count != k){
            node1 = node1->next;
            count++;
        }
        int value1 = node1->val;

        ListNode *node2 = head;
        count = 0;
        while(count  != (size - k)){
            node2 = node2->next;
            count++;
        } 
        int temp = node1->val;
        node1->val = node2->val;
        node2->val = temp;
        return head;
    }
};